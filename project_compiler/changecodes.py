import re

regs = [
    't1', 't2', 't3', 't4', 't5', 't6', 't7', 's0', 's1', 's2', 's3', 's4',
    's5', 's6', 's7'
]
table = {}
reg_ok = {}
variables = []
data = []


def load_var(inter):
    global variables
    temp_re = r'(temp\d+|&array\d+)'
    for line in inter:
        temps = re.findall(temp_re, ' '.join(line))
        variables += temps


def load_inter(filename):
    lines = []
    for line in open(filename, 'r', encoding='utf-8'):
        line = line.replace('\r', '').replace('\n', '')
        if line == '':
            continue
        lines.append(line.split(' '))
    return lines


def get_r(string):
    print(variables)
    print(table)
    if string[0] == '*':
        string = string[1:]
    try:
        variables.remove(string)
    except Exception as e:
        print(string, "is not in variables!")
    if string in table:
        return '$' + table[string]
    else:
        keys = []
        for key in table:
            keys.append(key)
        for key in keys:
            if 'temp' in key and key not in variables:
                reg_ok[table[key]] = 1
                del table[key]
        for reg in regs:
            if reg_ok[reg] == 1:
                table[string] = reg
                reg_ok[reg] = 0
                return '$' + reg


def translate(line):
    if line[0] == 'LABEL':
        return line[1] + ':'

    if line[1] == ':=':
        if len(line) == 3:
            if line[-1][0] == '#':
                return '\tli %s,%s' % (get_r(line[0]), line[-1].replace(
                    '#', ''))
            elif line[0][0] == '*':
                return '\tsw %s,0(%s)' % (get_r(line[2]), get_r(line[0][1:]))
            elif line[2][0] == '*':
                return '\tlw %s,0(%s)' % (get_r(line[0]), get_r(line[2][1:]))
            else:
                get_r(line[0])
                get_r(line[2])
                return '\tmove %s,%s' % (get_r(line[0]), get_r(line[2]))

        if len(line) == 5:
            if line[2][0] == '&' and line[2][1] == 'a':
                return '\tla %s,%s\n\taddu %s,%s,%s' % (get_r(
                    line[2]), line[2][1:], get_r(line[0]), get_r(line[4]),
                                                        get_r(line[2]))
            tmp_array = []
            if line[2][0] == '*':
                t1 = get_r(line[2][1:])
                variables.append(line[2][1:])
                t2 = get_r(line[2][1:])
                variables.append(line[2][1:])
                tmp_array.append('\tlw %s,0(%s)' % (t1, t2))
            if line[4][0] == '*':
                t1 = get_r(line[4][1:])
                variables.append(line[4][1:])
                t2 = get_r(line[4][1:])
                variables.append(line[4][1:])
                tmp_array.append('\tlw %s,0(%s)' % (t1, t2))
            if line[3] == '+':
                if line[-1][0] == '#':
                    return '\taddi %s,%s,%s' % (get_r(line[0]), get_r(line[2]),
                                                line[-1].replace('#', ''))
                else:
                    tmp_array.append('\tadd %s,%s,%s' % (get_r(
                        line[0]), get_r(line[2]), get_r(line[-1])))
                    return '\n'.join(tmp_array)
            elif line[3] == '-':
                if line[-1][0] == '#':
                    return '\taddi %s,%s,-%s' % (get_r(line[0]), get_r(
                        line[2]), line[-1].replace('#', ''))
                else:
                    tmp_array.append('\tsub %s,%s,%s' % (get_r(
                        line[0]), get_r(line[2]), get_r(line[-1])))
                    return '\n'.join(tmp_array)
            elif line[3] == '*':
                tmp_array.append('\tmul %s,%s,%s' % (get_r(
                    line[0]), get_r(line[2]), get_r(line[4])))
                return '\n'.join(tmp_array)
            elif line[3] == '/':
                tmp_array.append('\tdiv %s,%s\n\tmflo %s' % (get_r(
                    line[2]), get_r(line[-1]), get_r(line[0])))
                return '\n'.join(tmp_array)
            elif line[3] == '<':
                tmp_array.append('\tslt %s,%s,%s' % (get_r(
                    line[0]), get_r(line[2]), get_r(line[-1])))
                return '\n'.join(tmp_array)
            elif line[3] == '>':
                tmp_array.append('\tslt %s,%s,%s' % (get_r(
                    line[0]), get_r(line[-1]), get_r(line[2])))
                return '\n'.join(tmp_array)
        if line[2] == 'CALL':
            if line[3] == 'read' or line[3] == 'print':
                return '\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal %s\n\tlw $ra,0($sp)\n\tmove %s,$v0\n\taddi $sp,$sp,4' % (
                    line[-1], get_r(line[0]))
            else:
                return '\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n\tsw $t3,16($sp)\n\tsw $t4,20($sp)\n\tjal %s\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove %s $v0' % (
                    line[-1], get_r(line[0]))

    if line[0] == 'DEC':
        data.append('%s: .space 1024' % (line[1]))

    if line[0] == 'GOTO':
        return '\tj %s' % line[1]

    if line[0] == 'RETURN':
        return '\tmove $v0,%s\n\tjr $ra' % get_r(line[1])

    if line[0] == 'IF':
        if line[2] == '==':
            return '\tbeq %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])
        if line[2] == '!=':
            return '\tbne %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])
        if line[2] == '>':
            return '\tbgt %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])
        if line[2] == '<':
            return '\tblt %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])
        if line[2] == '>=':
            return '\tbge %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])
        if line[2] == '<=':
            return '\tble %s,%s,%s' % (get_r(line[1]), get_r(line[3]),
                                       line[-1])

    if line[0] == 'FUNCTION':
        return '%s:' % line[1]

    if line[0] == 'CALL':
        if line[-1] == 'read' or line[-1] == 'print':
            return '\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal %s\n\tlw $ra,0($sp)\n\taddi $sp,$sp,4' % (
                line[-1])
        else:
            return '\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n\tsw $t3,16($sp)\n\tsw $t4,20($sp)\n\tjal %s\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove %s $v0' % (
                line[-1], get_r(line[0]))

    if line[0] == 'ARG':
        if line[1][0] == '*':
            return '\tlw %s,0(%s)\n\tmove $t0,$a0\n\tmove $a0,%s' % (get_r(
                line[1][1:]), get_r(line[1][1:]), get_r(line[1][1:]))
        return '\tmove $t0,$a0\n\tmove $a0,%s' % get_r(line[-1])

    if line[0] == 'PARAM':
        table[line[-1]] = 'a0'

    return ''


def write_to_txt(obj):
    f = open('result.asm', 'w')
    template1 = '''
read:
    li $v0,4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra

print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
.data
_prompt: .asciiz "Enter an integer:"
_ret: .asciiz "\\n"
.globl main
.text
'''
    f.write(template1)
    f.write('\n'.join(data) + '\n')
    for line in obj:
        f.write(line + '\n')
    f.close()


def parser():
    for reg in regs:
        reg_ok[reg] = 1
    inter = load_inter('intermidiate.txt')
    load_var(inter)
    obj = []
    for line in inter:
        print(line)
        obj_line = translate(line)
        if obj_line == '':
            continue
        obj.append(obj_line)
        print(obj_line)
    write_to_txt(obj)


if __name__ == "__main__":
    parser()
