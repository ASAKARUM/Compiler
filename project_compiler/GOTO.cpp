#include "GOTO.h"
#include <fstream>

codelist* new_codelist() {
	codelist* p = new codelist;
	p->linecnt = 0;
	p->temp_index = 0;
	return p;
};

void Gen(codelist *dst, string str) {
	dst->code.push_back(str);
};
string temp;


void gen_goto(codelist *dst, int instrno) {
	temp = "goto L" + to_string(instrno);
	Gen(dst, temp);
};

void gen_1addr(codelist *dst, string left, string op) {
	temp = left + " " + op;
	Gen(dst, temp);
};
void gen_2addr(codelist *dst, string left, string op, string right) {
	if (op != "") {
		op = " " + op;
	}
	temp = left + " :=" + op + " " + right;
	Gen(dst, temp);
};
void gen_3addr(codelist *dst, string left, string op1, string op, string op2) {
	temp = left + " := " + op1 + " " + op + " " + op2;
	Gen(dst, temp);
};

void gen_if(codelist *dst, string comp, int label) {
	temp = "IF " + comp + " GOTO label" + to_string(label);
	Gen(dst, temp);
};


void print(codelist* dst) {
	ofstream of;
	of.open("intermidiate.txt");
	for (int i = 0; i < dst->code.size(); i++) {
		cout << dst->code[i] << endl;
		of << dst->code[i] << endl;
	}
	of.close();
};