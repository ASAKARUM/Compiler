#ifndef _TREE_H
#define _TREE_H
#endif
#include<string>
#include<cstring>
#include<vector>
#include<cstdarg>
#include<iostream>
#include "GOTO.h"

using namespace std;

class Node
{
public:
	string content;
	string value;
	string type;
	string addr = "";
	string addr2 = "";
	vector<int> block;
	vector<Node*> child;
	int num;
	Node(int num, string value, string content);
	void addchild(Node* child);
	void print_node();
	bool check_block(Node* other);
	~Node();
};

class Tree
{
	int count;
public:
	vector<Node*>  nodes;
	Node* root;
	vector<bool> judge;
	vector<int> number;
	Tree();
	~Tree();
	int create_tree(string content, string value, int cnt, ...);
	int findNode(int key);
	void print_tree();
	int add_child(int parent, int cnt, ...);
	void tree_tree(int size, int depth);
	void change_type(int key, string type);
	Node* get_node(int key);
	int duplicate_id(string value);
};

extern void gem_tree(Node* parent, int id);

extern Tree* tree;