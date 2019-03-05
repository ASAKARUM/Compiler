#include "lnode.h"
list<link> linklist;
extern void storeNorm(string e, string v) {
	link *obj = new link(e, v);
	linklist.push_front(*obj);
}

extern string** storeSpec(string e, string v) {
	for (list<link>::iterator i = linklist.begin(); i != linklist.end(); i++) {
		if (*(i->value) == v) {
			return i->address;
		}
	}
	link *obj = new link(e, v);
	linklist.push_front(*obj);
	return obj->address;
}

extern string storeNum(string e, string v) {
	link *obj = new link(e, v);
	linklist.push_front(*obj);
	return *(obj->value);
}

extern bool judgeStruct() {
	link i = linklist.front();
	if (*(i.value) == "struct") {
		return true;
	}
	else {
		return false;
	}
}