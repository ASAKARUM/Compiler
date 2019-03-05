#ifndef _LNODE_H
#define _LNODE_H
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <list>
#include <iostream>
#include <string>
using namespace std;

struct link {
	string *elem;
	string *value;
	string **address;
	link(string e, string v) {
		this->elem = new string(e);
		this->value = new string(v);
		this->address = &(this->value);
	}
};

extern list<link> linklist;

extern void storeNorm(string e, string v);
extern string **storeSpec(string e, string v);
extern string storeNum(string e, string v);
extern bool judgeStruct();
