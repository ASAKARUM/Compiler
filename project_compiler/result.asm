
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
_ret: .asciiz "\n"
.globl main
.text
array0: .space 1024
func:
	li $t1,1
	add $a0,$a0,$t1
	move $v0,$a0
	jr $ra
main:
	li $t1,35
	move $t2,$t1
	li $t1,3
	li $t3,4
	mul $t4,$t3,$t1
	li $t1,1
	li $t3,4
	mul $t5,$t3,$t1
	la $t1,array0
	addu $t3,$t5,$t1
	li $t5,5
	sw $t5,0($t3)
	li $t3,2
	li $t5,4
	mul $t6,$t5,$t3
	la $t1,array0
	addu $t3,$t6,$t1
	li $t5,2
	li $t6,1
	li $t7,4
	mul $s0,$t7,$t6
	la $t1,array0
	addu $t6,$s0,$t1
	lw $t6,0($t6)
	add $t7,$t5,$t6
	sw $t7,0($t3)
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal read
	lw $ra,0($sp)
	move $t3,$v0
	addi $sp,$sp,4
	move $t5,$t3
	li $t3,2
	move $t6,$t3
	li $t3,1
	add $t2,$t2,$t3
	li $t3,5
	move $t0,$a0
	move $a0,$t3
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal func
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t2 $v0
	li $t3,20
	add $t7,$t2,$t3
	move $t2,$t7
	li $t3,22
	li $t7,0
	blt $t6,$t3,label0
	j label1
label0:
	bne $t2,$t7,label2
	j label1
label1:
	move $t3,$t7
	j label3
label2:
	move $s0,$t3
label3:
	move $s0,$t3
	beq $s0,$s0,label4
	j label5
label4:
	li $s0,1
	add $t6,$t6,$s0
label5:
	li $s0,0
	move $s1,$s0
label6:
	li $s0,10
	blt $s1,$s0,label7
	j label8
label7:
	li $s0,1
	add $t2,$t2,$s0
	li $s0,1
	add $s1,$s1,$s0
	j label6
label8:
	li $s0,5
	li $s2,6
	mul $s3,$s0,$s2
	li $s0,4
	li $s2,34
	sub $s4,$t2,$s2
	div $s0,$s4
	mflo $s0
	add $s2,$s3,$s0
	add $s0,$t6,$s2
	move $t6,$s0
	move $s0,$t7
	move $s0,$t7
	ble $t2,$s0,label9
	j label10
label9:
	move $s0,$t3
	j label12
label10:
	bgt $t6,$s2,label9
	j label11
label11:
	move $s0,$t7
label12:
	move $s0,$t3
	beq $s0,$s0,label13
	j label14
label13:
	li $s0,0
	blt $t6,$s0,label16
	j label17
label16:
	li $s0,3
	add $s2,$t2,$s0
	move $t2,$s2
	move $t0,$a0
	move $a0,$t2
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	j label18
label17:
	li $s0,3
	add $s2,$t6,$s0
	move $t6,$s2
	move $t0,$a0
	move $a0,$t2
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	move $t0,$a0
	move $a0,$t6
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	move $t0,$a0
	move $a0,$t5
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $s0,2
	li $s2,4
	mul $s3,$s2,$s0
	la $t1,array0
	addu $s0,$s3,$t1
	lw $s0,0($s0)
	move $t0,$a0
	move $a0,$s0
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
label18:
	j label15
label14:
	li $s0,10
	move $t0,$a0
	move $a0,$s0
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
label15:
	li $s0,0
	move $v0,$s0
	jr $ra
