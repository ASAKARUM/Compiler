#ifndef _GOTO_H
#define _GOTO_H
#endif
#include<string>
#include<cstring>
#include<vector>
#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct codelist
{
	int linecnt, capacity;
	int temp_index;
	vector<string> code;
}codelist;

codelist* new_codelist();
extern void Gen(codelist *dst, string str);
extern void gen_goto(codelist *dst, int instrno);
extern void gen_1addr(codelist *dst, string left, string op);
extern void gen_2addr(codelist *dst, string left, string op, string right);
extern void gen_3addr(codelist *dst, string left, string op1, string op, string op2);
extern void gen_if(codelist *dst, string comp, int label);
extern void print(codelist* dst);

