#include "tree.h"

#include <iomanip>

Node::Node(int num, string value, string content) {
	this->num = num;
	this->value = value;
	this->content = content;
}

Node::~Node() {}

void Node::addchild(Node* child) {
	this->child.push_back(child);
}

void Node::print_node() {
	cout << setw(2) << setiosflags(ios::left) << this->num << ": " << setw(25) << setiosflags(ios::left) << this->content;
	if (this->content == "ID Declaration")
		cout << "symbol:" << setw(13) << setiosflags(ios::left) << this->value;
	else
		cout << setw(20) << setiosflags(ios::left) << this->value;
	cout << "children: ";
	for (int i = 0; i < child.size(); i++)
	{
		cout << child.at(i)->num << " ";
	}
	cout << this->type;
	cout << endl;
};

bool Node::check_block(Node* other) {
	bool ans = true;
	if (other->block.size() > this->block.size())
		ans = false;
	else {
		for (int i = 0; i < other->block.size(); i++) {
			if (this->block[i] != other->block[i]) {
				ans = false;
				break;
			}
		}
	}
	return ans;
};

int Tree::create_tree(string content, string value, int cnt, ...) {
	if (content == "ID Declaration") {
		int tell = duplicate_id(value);
		if (tell > 0)
			return tell;
	}
	va_list argp;
	va_start(argp, cnt);
	this->count++;
	Node* parent = new Node(this->count, value, content);
	Node* child;
	for (int i = 0; i < cnt; i++) {
		child = nodes.at(findNode(va_arg(argp, int)));
		parent->addchild(child);
	}
	nodes.push_back(parent);
	va_end(argp);
	return this->count;
}

int Tree::add_child(int parent, int cnt, ...) {
	va_list argp;
	va_start(argp, cnt);
	int parent_index = findNode(parent);
	Node* parent_node = nodes[parent_index];
	nodes.erase(nodes.begin() + parent_index);
	int child_index;
	for (int i = 0; i < cnt; i++) {
		child_index = findNode(va_arg(argp, int));
		parent_node->addchild(nodes[child_index]);
	}
	for (int i = parent_index; i<nodes.size(); i++) {
		nodes[i]->num -= 1;
	}
	parent_node->num = count;
	nodes.push_back(parent_node);
	return count;
};


Tree::Tree() {
	this->count = -1;
}

int Tree::findNode(int key) {
	for (int i = 0; i < nodes.size(); i++) {
		if (nodes.at(i)->num == key) {
			return i;
		}
	}
}

void Tree::print_tree() {
	for (int i = 0; i < nodes.size() + 1; i++)
		this->judge.push_back(false);
	this->judge[nodes.size() - 1] = true;
	this->tree_tree(nodes.size() - 1, 0);
	for (int i = 0; i < nodes.size(); i++) {
		nodes.at(i)->print_node();
	}
	gem_tree(tree->nodes[tree->nodes.size() - 1], -1);
}

void Tree::tree_tree(int size, int depth) {
	string str;
	this->number.push_back(size);
	for (int i = 0; i < depth; i++) {
		if (this->judge[number.at(i)])
			str += "   ";
		else
			str += "│  ";
	}
	if (this->judge[size])
		str += "└─ ";
	else
		str += "├─ ";
	cout << str << nodes.at(size)->content << ":" << size << "  " << nodes.at(size)->value << endl;
	if (nodes.at(size)->child.size() == 0)
		return;
	else {
		this->judge[(nodes.at(size)->child.at(nodes.at(size)->child.size() - 1))->num] = true;
		for (int i = 0; i < nodes.at(size)->child.size(); i++) {
			this->tree_tree(nodes.at(size)->child.at(i)->num, depth + 1);
			this->number.pop_back();
		}
	}
}

void Tree::change_type(int key, string type) {
	nodes[findNode(key)]->type = type;
}

Node* Tree::get_node(int key) {
	return nodes[findNode(key)];
}

int Tree::duplicate_id(string value) {
	for (int i = 0; i < nodes.size(); i++) {
		Node* temp = nodes.at(i);
		if (temp->content == "ID Declaration" && temp->value == value)
			return temp->num;
	}
	return -1;
}


Tree::~Tree() {}

Tree* tree = new Tree();

codelist* newlist = new_codelist();
int temp_num = 0;
int var_num = 0;
int label_num = 0;


bool has_flag = false;
int left_id = -1;
int array_num = 0;

void insert_into_newlist(Node* node, string op, bool is_front)
{
	gem_tree(node, 0);
	if (has_flag)
	{
		string temp = tree->nodes[left_id]->addr;
		if (!is_front)
			gen_2addr(newlist, temp, "", node->child[0]->addr);
		string temp_addr = "temp" + to_string(temp_num++);
		gen_2addr(newlist, temp_addr, "", "#1");
		gen_3addr(newlist, node->child[0]->addr, node->child[0]->addr, op, temp_addr);
		if (is_front)
			gen_2addr(newlist, temp, "", node->child[0]->addr);
		has_flag = false;
		return;
	}
	else
	{
		string temp_addr = "temp" + to_string(temp_num++);
		gen_2addr(newlist, temp_addr, "", "#1");
		gen_3addr(newlist, node->child[0]->addr, node->child[0]->addr, op, temp_addr);
		return;
	}
}


void gem_tree(Node* parent, int id) {
	Node* node;
	if (id == -1)
		node = parent;
	else
		node = parent->child[id];

	if (node->content == "ID Declaration") {
		if (node->addr == "") {
			node->addr = "var" + to_string(var_num++);
			node->block = parent->block;
		}
		else {
			if (parent->check_block(node))
				return;
			for (int i = 0; i < node->child.size(); i++) {
				if (parent->check_block(node->child[i])) {
					parent->child[id] = node->child[i];
					return;
				}
			}
			Node* new_node = new Node(-1, node->value, node->content);
			parent->child[id] = new_node;
			node->child.push_back(new_node);
			new_node->block = parent->block;
			new_node->addr = "var" + to_string(var_num++);
		}
		return;
	}

	node->block = parent->block;
	string value = node->value;

	if (node->content == "Program") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
		}
		print(newlist);
		return;
	}
	if (node->content == "CompoundK statement") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
		}
		return;
	}
	if (node->content == "Var Declaration") {
		for (int i = 1; i < node->child.size(); i++) {
			gem_tree(node, i);
		}
		return;
	}
	if (node->value == "array") {
		if (node->child[0]->addr == "") {
			node->child[0]->addr = "var" + to_string(var_num++);
			node->child[0]->addr2 = "array" + to_string(array_num);
		}
		gem_tree(node, 1);
		node->addr = "temp" + to_string(temp_num++);
		gen_3addr(newlist, node->addr, "&" + node->child[0]->addr2, "+", node->child[1]->addr);
		node->addr = "*" + node->addr;
		return;
	}
	if (node->type == "boolean") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
		}
		if (node->value.substr(0, 2) == "op") {
			if (node->child[0]->type == "boolean" && node->child[1]->type == "boolean") {
				/*string temp = "temp" + to_string(temp_num++);
				gen_2addr(newlist, temp, "", node->child[0]->addr);
				node->child[0]->addr = temp;
				temp = "temp" + to_string(temp_num++);
				gen_2addr(newlist, temp, "", node->child[1]->addr);
				node->child[1]->addr = temp;*/
				if (value.substr(3, value.size()) == "||") {
					int label = label_num;
					label_num += 4;
					gen_if(newlist, node->child[0]->addr, label);
					Gen(newlist, "GOTO label" + to_string(label + 1));
					Gen(newlist, "LABEL label" + to_string(label) + " :");
					string temp1 = "temp" + to_string(temp_num++);
					gen_2addr(newlist, temp1, "", "#1");
					Gen(newlist, "GOTO label" + to_string(label + 3));
					Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
					gen_if(newlist, node->child[1]->addr, label);
					Gen(newlist, "GOTO label" + to_string(label + 2));
					Gen(newlist, "LABEL label" + to_string(label + 2) + " :");
					gen_2addr(newlist, temp1, "", "#0");
					Gen(newlist, "LABEL label" + to_string(label + 3) + " :");
					string temp2 = "temp" + to_string(temp_num++);
					gen_2addr(newlist, temp2, "", "#1");
					node->addr = temp1 + " == " + temp2;
				}
				else if (value.substr(3, value.size()) == "&&") {
					int label = label_num;
					label_num += 4;
					gen_if(newlist, node->child[0]->addr, label);
					Gen(newlist, "GOTO label" + to_string(label + 1));
					Gen(newlist, "LABEL label" + to_string(label) + " :");
					gen_if(newlist, node->child[1]->addr, label + 2);
					Gen(newlist, "GOTO label" + to_string(label + 1));
					Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
					string temp1 = "temp" + to_string(temp_num++);
					gen_2addr(newlist, temp1, "", "#0");
					Gen(newlist, "GOTO label" + to_string(label + 3));
					Gen(newlist, "LABEL label" + to_string(label + 2) + " :");
					gen_2addr(newlist, temp1, "", "#1");
					Gen(newlist, "LABEL label" + to_string(label + 3) + " :");
					string temp2 = "temp" + to_string(temp_num++);
					gen_2addr(newlist, temp2, "", "#1");
					node->addr = temp1 + " == " + temp2;
				}
			}
			else if (value.substr(3, value.size()) == "!") {
				string temp = "temp" + to_string(temp_num++);
				gen_2addr(newlist, temp, "", "#0");
				node->addr = node->child[0]->addr + " <= " + temp;
			}
			else
				node->addr = node->child[0]->addr + " " + value.substr(3, value.size()) + " " + node->child[1]->addr;
		}
		else {
			string temp = "temp" + to_string(temp_num++);
			gen_2addr(newlist, temp, "", "#0");
			node->addr = node->child[0]->addr + " > " + temp;
		}
		return;
	}

	/*if (node->type == "boolean") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
		}
		if (node->value.substr(0, 2) == "op") {
			if (node->child[0]->type == "boolean" && node->child[1]->type == "boolean") {
				string temp = "temp" + to_string(temp_num++);
				gen_2addr(newlist, temp, "", node->child[0]->addr);
				node->child[0]->addr = temp;
				temp = "temp" + to_string(temp_num++);
				gen_2addr(newlist, temp, "", node->child[1]->addr);
				node->child[1]->addr = temp;
			}
			node->addr = node->child[0]->addr + " " + value.substr(3, value.size()) + " " + node->child[1]->addr;
		}
		else {
			node->addr = node->child[0]->addr;
		}
		return;
	}*/
	if (node->content == "Expr") {
		if (node->value == "op:=") {
			if (node->child[1]->content == "Function Call") {
				node->child[1]->addr2 = "assigned";
			}
			for (int i = 0; i<node->child.size(); i++)
				if (node->child[i]->value == "op:v++" || node->child[i]->value == "op:v--" ||
					node->child[i]->value == "op:++v" || node->child[i]->value == "op:--v")
				{
					has_flag = true;
					left_id = node->child[0]->num;
				}

			gem_tree(node, 0);
			gem_tree(node, 1);
			node->addr = node->child[0]->addr;
			if (node->child[1]->addr != "")
				gen_2addr(newlist, node->child[0]->addr, "", node->child[1]->addr);
			return;
		}
		else if (node->value == "op:+=" || node->value == "op:-="
			|| node->value == "op:*=" || node->value == "op:/=" || node->value == "%=" || node->value == "^=") {
			gem_tree(node, 0);
			gem_tree(node, 1);
			node->addr = node->child[0]->addr;
			node->addr = "temp" + to_string(temp_num++);
			gen_3addr(newlist, node->addr, node->child[0]->addr,
				node->value.substr(3, 1), node->child[1]->addr);
			gen_2addr(newlist, node->child[0]->addr, "", node->addr);
			return;
		}
		else if (node->value == "op:v++")
		{
			insert_into_newlist(node, "+", false);
			return;
		}
		else if (node->value == "op:v--")
		{
			insert_into_newlist(node, "-", false);
			return;
		}
		else if (node->value == "op:++v")
		{
			insert_into_newlist(node, "+", true);
			return;
		}
		else if (node->value == "op:--v")
		{
			insert_into_newlist(node, "-", true);
			return;
		}
		else if (node->value == "op:[]") {
			gem_tree(node, 0);
			string temp = "temp" + to_string(temp_num++);
			gen_2addr(newlist, temp, "", "#" + to_string(4));
			node->addr = "temp" + to_string(temp_num++);
			gen_3addr(newlist, node->addr, temp, "*", node->child[0]->addr);
		}
		else if (node->value.substr(0, 2) == "op") {
			gem_tree(node, 0);
			gem_tree(node, 1);
			node->addr = "temp" + to_string(temp_num++);
			gen_3addr(newlist, node->addr, node->child[0]->addr,
				node->value.substr(3, node->value.size() - 1), node->child[1]->addr);
		}
	}
	if (node->content == "Const Declaration") {
		node->addr = "temp" + to_string(temp_num++);
		gen_2addr(newlist, node->addr, "", "#" + node->value);
		return;
	}
	if (node->content == "WriteK statement")
	{
		if (node->value == "scanf")
		{
			node->addr = "temp" + to_string(temp_num++);
			gen_2addr(newlist, node->addr, "CALL", "read");
			string temp_name = node->addr;
			node->addr = node->child[0]->addr;
			gen_2addr(newlist, node->addr, "", temp_name);
		}
		else if (node->value == "print")
		{
			gem_tree(node, 0);
			node->addr = node->child[0]->addr;
			gen_1addr(newlist, "ARG", node->addr);
			gen_1addr(newlist, "CALL", "print");
		}
		return;
	}
	if (node->value == "if-else") {
		gem_tree(node, 0);
		int label = label_num;
		label_num += 3;
		gen_if(newlist, node->child[0]->addr, label);
		Gen(newlist, "GOTO label" + to_string(label + 1));
		Gen(newlist, "LABEL label" + to_string(label) + " :");
		gem_tree(node, 1);
		Gen(newlist, "GOTO label" + to_string(label + 2));
		Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
		gem_tree(node, 2);
		Gen(newlist, "LABEL label" + to_string(label + 2) + " :");
		return;
	}
	if (node->value == "if") {
		gem_tree(node, 0);
		int label = label_num;
		label_num += 2;
		gen_if(newlist, node->child[0]->addr, label);
		Gen(newlist, "GOTO label" + to_string(label + 1));
		Gen(newlist, "LABEL label" + to_string(label) + " :");
		gem_tree(node, 1);
		Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
		return;
	}
	if (node->value == "while") {
		node->block.push_back(id);
		int label = label_num;
		label_num += 3;
		Gen(newlist, "LABEL label" + to_string(label) + " :");
		// gem_tree(node, 0);
		gen_if(newlist, node->child[0]->addr, label + 1);
		Gen(newlist, "GOTO label" + to_string(label + 2));
		Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
		gem_tree(node, 1);
		Gen(newlist, "GOTO label" + to_string(label));
		Gen(newlist, "LABEL label" + to_string(label + 2) + " :");
		return;
	}
	if (node->value == "do-while") {
		node->block.push_back(id);
		int label = label_num;
		label_num += 1;
		Gen(newlist, "LABEL label" + to_string(label) + " :");
		gem_tree(node, 0);
		gem_tree(node, 1);
		gen_if(newlist, node->child[1]->addr, label);
		return;
	}

	if (node->value == "for") {
		node->block.push_back(id);
		int label = label_num;
		label_num += 3;
		gem_tree(node, 0);
		Gen(newlist, "LABEL label" + to_string(label) + " :");
		if (node->child[1]->content != "None expr") {
			gem_tree(node, 1);
			gen_if(newlist, node->child[1]->addr, label + 1);
			Gen(newlist, "GOTO label" + to_string(label + 2));
		}
		else
			Gen(newlist, "GOTO label" + to_string(label + 1));
		Gen(newlist, "LABEL label" + to_string(label + 1) + " :");
		gem_tree(node, 3);
		gem_tree(node, 2);
		Gen(newlist, "GOTO label" + to_string(label));
		Gen(newlist, "LABEL label" + to_string(label + 2) + " :");
		return;
	}
	if (node->content == "Function Definition") {
		node->block.push_back(id);
		if (node->child[0]->content == "Main Declaration") {
			newlist->code.push_back("FUNCTION main :");
		}
		else if (node->child[0]->content == "Function Declaration") {
			node->block.push_back(0);
			node->child[0]->block = node->block;

			string function_name = node->child[0]->child[0]->child[1]->value;
			newlist->code.push_back("FUNCTION " + function_name + " :");
		}
		if (node->child[0]->child.size() > 1) {
			gem_tree(node->child[0], 1);
		}
		gem_tree(node, 1);
		return;
	}
	if (node->content == "Parameter Declaration") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
			newlist->code.push_back("PARAM " + node->child[i]->child[1]->addr);
		}
		return;
	}

	if (node->content == "Return statement") {
		gem_tree(node, 0);
		newlist->code.push_back("RETURN " + node->child[0]->addr);
		return;
	}
	if (node->content == "Function Call") {
		string function_name = node->child[0]->value;
		node->addr = "CALL " + function_name;
		if (node->addr2 != "assigned") {
			newlist->code.push_back(node->addr);
		}
		if (node->child.size() > 1) {
			gem_tree(node, 1);
		}
	}
	if (node->content == "Real Parameter") {
		for (int i = 0; i < node->child.size(); i++) {
			gem_tree(node, i);
			string real_para_value = node->child[i]->addr;
			newlist->code.push_back("ARG " + real_para_value);
		}
		return;
	}
	if (node->content == "Array Declaration") {
		if (node->child[1]->value == "array") {
			if (node->child[1]->child[0]->addr == "") {
				node->child[1]->child[0]->addr = "var" + to_string(var_num++);
				node->child[1]->child[0]->addr2 = "array" + to_string(array_num);
			}
			gem_tree(node->child[1], 0);
			gem_tree(node->child[1], 1);
		}
		newlist->code.push_back("DEC " + node->child[1]->child[0]->addr2 + " " + node->child[1]->child[1]->addr);
		return;
	}
}