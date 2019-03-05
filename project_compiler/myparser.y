%{
	#include <stdio.h>	
	#include <iostream>
	#include <cstdarg>
	#include <vector>
	#include <string>
	#include <string.h>
	#include "tree.h"
	#include "lnode.h"
	#include "mylexer.h"
	using namespace std;
	void yyerror(const char* msg) {}
	bool judge_str(string str)
{
	for (int i = 0; i < str.size(); i++)
		if (str[i] < '0' || str[i] > '9')
			return false;
	return true;
}
	extern int no;
%}

%union {
	int integer;
}

%name myparser
// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

%include {
#ifndef YYSTYPE
#define YYSTYPE int
#endif
}
%token <integer> IDENTIFIER NUMBER
%token <integer> /*PTR_OP*/ INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <integer> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <integer> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN ARROW
%token <integer> /*XOR_ASSIGN*/ OR_ASSIGN TYPE_NAME 

%token <integer> CHAR INT DOUBLE VOID BOOL STRUCT_ID

%token <integer> CASE IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token <integer> TRUE FALSE
%token <integer> FLOAT MAIN  SCANF STRUCT HEAD FORMAT PRINT

%token <integer> ';' ',' '=' ':' '[' ']' '.' '&' '!' '~' '-' '+' '*' '/' '%' '<' '>' '^' '|' '?' '{' '}' '(' ')'

%left '!'
%left OR_OP
%left AND_OP
%left LE_OP GE_OP EQ_OP NE_OP '>' '<'
%left '+' '-'
%left '*' '/'
%left '%'
%left INC_OP DEC_OP
%right '=' MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

%type <integer> program function_call function_defi function_decl stmt stmt_list expr_decl expr_set expr_setself numbers array_list
%type <integer> expr_comp expr type expr_type parameter_list real_parameter pointer struct_node struct_call array_expr vari expr_for_i expr_for_ii expr_for_iii/*struct_stmt struct_list*/
//%nonassoc IF
//%nonassoc ELSE
%nonassoc UMINUS
%start program
%%

program:
	| program function_defi { $$ = tree->add_child($1,1,$2); }
	| function_defi { $$ = tree->create_tree("Program","",1,$1); }
	|
	; 

function_defi:
	function_decl stmt {
		$$ = tree->create_tree("Function Definition","",2,$1,$2);}
	| struct_node
	|
	;
	
struct_node :
	STRUCT IDENTIFIER stmt ';' {
		$$ = tree->create_tree("Struct Definition","",2,$2,$3);
	}
	;	
	
function_decl:
	type MAIN '(' ')' {
		$$ = tree->create_tree("Main Declaration", "", 1, $1);
		//tree->print_tree();
	}
	| expr_decl '(' ')' {
		$$ = tree->create_tree("Function Declaration", "", 1, $1);
		//tree->print_tree();
	}
	| expr_decl '(' parameter_list ')' {
		$$ = tree->create_tree("Function Declaration", "", 2, $1,$3);
		//tree->print_tree();
	}
	;
	
function_call:
	IDENTIFIER '(' ')' { $$ = tree->create_tree("Function Call","",1,$1);}
	| IDENTIFIER '(' real_parameter ')' {$$ = tree->create_tree("Function Call","",2,$1,$3);}
	;

real_parameter:
	real_parameter ',' expr {$$ = tree->add_child($1,1,$3);}
	|expr {$$ = tree->create_tree("Real Parameter", "",1,$1);}
	;

parameter_list:
	parameter_list ',' expr_decl { $$ = tree->add_child($1,1,$3); }
	| expr_decl {$$ = tree->create_tree("Parameter Declaration","",1,$1);}
	;

stmt:
	';' {
		$$ = tree->create_tree("None statement", "", 0);
	}
	| expr ';'
	| expr_type ';' /*{
		$$ = tree->create_tree("CompoundK statement", "", 1, $1);
		//tree->print_tree();
	}*/
	| PRINT '(' expr ')' ';'    {
		$$ = tree->create_tree("WriteK statement", "print", 1, $3);
		//tree->print_tree();
	}
	| PRINT '(' expr_set ')' ';'    {
		$$ = tree->create_tree("WriteK statement", "print", 1, $3);
		//tree->print_tree();
	}	
	| SCANF '(' expr ')' ';'    {
		$$ = tree->create_tree("WriteK statement", "scanf", 1, $3);
		//tree->print_tree();
	}
	| SCANF '(' expr_set ')' ';'    {
		$$ = tree->create_tree("WriteK statement", "scanf", 1, $3);
		//tree->print_tree();
	}	
	| FOR '(' expr_for_i ';' expr_for_ii ';' expr_for_iii ')' stmt {
		$$ = tree->create_tree("RepeatK statement","for",4,$3,$5,$7,$9);
		//tree->print_tree();
	}
	| WHILE '(' expr_comp ')' stmt {
		$$ = tree->create_tree("RepeatK statement","while",2,$3,$5);
		//tree->print_tree();
	}
	| DO stmt WHILE '(' expr_comp ')' {
		$$ = tree->create_tree("RepeatK statement","do-while",2,$2,$5);
		//tree->print_tree();
	}
	| IF '(' expr_comp ')' stmt %prec IF {
		$$ = tree->create_tree("ConditionK statement","if",2,$3,$5);
		//tree->print_tree();
	}
	| IF '(' expr_comp ')' stmt ELSE stmt %prec ELSE {
		$$ = tree->create_tree("ConditionK statement","if-else",3,$3,$5,$7);
		//tree->print_tree();
	}
	| RETURN stmt {
		$$ = tree->create_tree("Return statement","return",1,$2);
	}
	| '{' stmt_list '}' {
		//$$ = tree->add_child("CompoundK statement","",1,$2);
		//tree->print_tree();
		$$ = $2;
	}
	| '{' '}' {
		$$ = tree->create_tree("CompoundK statement","Non stmt",0);
		//tree->print_tree();
	}
	| function_call ';'
	;

expr_for_i:
	expr_type
	| {$$ = tree->create_tree("None expr","",0);}
	;
	
expr_for_ii:
	expr_comp {
	}
	| {
		$$ = tree->create_tree("None expr","",0);
	}
	;
	
expr_for_iii:
	expr_set
	| {$$ = tree->create_tree("None expr","",0);}
	;

stmt_list:
	stmt {$$ = tree->create_tree("CompoundK statement","",1,$1);}
	| stmt_list stmt {
		$$ = tree->add_child($1,1,$2);
		//tree->print_tree();
	}
	;

vari :
	IDENTIFIER {
		if(tree->get_node($1)->type == "") {
			tree->change_type($$,"error");
			/*cout << "变量未声明!" << endl;*/
		}
		else {
			tree->change_type($$,"integer");
		}
		// cout << tree->get_node($1)->value << endl;
	}
	| array_expr
	| struct_call
	;

expr_set:
	vari '=' expr {
		//cout << tree->get_node($$)->type << endl;
		/*if (tree->get_node($3)->type=="error") {
			cout << "不能将非int类型的值分配到int类型的实体!" <<endl;
		}*/
		//tree->change_type($$,"void");
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
		//tree->print_tree();
	}
	| array_expr '=' '{' numbers '}' {
		$$ = tree->create_tree("Expr","op:=",2,$1,$4);
	}
	| array_expr '=' '{' '}' {
		$$ = tree->create_tree("Expr","op:=",1,$1);
	}
	| array_expr '=' expr {
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
	}
	| vari '=' expr_setself {
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
		//tree->print_tree();
	}
	| vari ADD_ASSIGN expr {
		$$ = tree->create_tree("Expr","op:+=",2,$1,$3);
		//tree->print_tree();
	}
	| vari SUB_ASSIGN expr {
		$$ = tree->create_tree("Expr","op:-=",2,$1,$3);
		//tree->print_tree();
	}
	| vari MUL_ASSIGN expr {
		$$ = tree->create_tree("Expr","op:*=",2,$1,$3);
		//tree->print_tree();
	} 
	| vari DIV_ASSIGN expr {
		$$ = tree->create_tree("Expr","op:/=",2,$1,$3);
		//tree->print_tree();
	}
	| vari MOD_ASSIGN expr {
		$$ = tree->create_tree("Expr","op:%=",2,$1,$3);
		//tree->print_tree();
	}
	| vari ADD_ASSIGN expr_setself {
		$$ = tree->create_tree("Expr","op:+=",2,$1,$3);
		//tree->print_tree();
	}
	| vari SUB_ASSIGN expr_setself {
		$$ = tree->create_tree("Expr","op:-=",2,$1,$3);
		//tree->print_tree();
	}
	| vari MUL_ASSIGN expr_setself {
		$$ = tree->create_tree("Expr","op:*=",2,$1,$3);
		//tree->print_tree();
	} 
	| vari DIV_ASSIGN expr_setself {
		$$ = tree->create_tree("Expr","op:/=",2,$1,$3);
		//tree->print_tree();
	}
	| vari MOD_ASSIGN expr_setself {
		$$ = tree->create_tree("Expr","op:%=",2,$1,$3);
		//tree->print_tree();
	}
	| vari '=' function_call {
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
	}
	/*|  struct_call '=' expr {
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
	}
	|  struct_call '=' expr {
		$$ = tree->create_tree("Expr","op:=",2,$1,$3);
	}*/
	| expr_setself
	;

numbers :
	numbers ',' expr {
		$$ = tree->add_child($1,1,$3);
	}
	| expr  {
		$$ = tree->create_tree("Array element","",1,$1);
	}
	| numbers ',' '{' numbers '}' {
		$$ = tree->add_child($1,1,$4);
	}
	| '{' numbers '}' {
		$$ = tree->create_tree("Array element","",1,$2);
	}
	;

struct_call :
	IDENTIFIER '.' IDENTIFIER {
		$$ = tree->create_tree("Struct_call","op:.",2,$1,$3);
	} 
	| IDENTIFIER ARROW IDENTIFIER {
		$$ = tree->create_tree("Struct_call","op:->",2,$1,$3);
	} 
	| pointer ARROW IDENTIFIER {
		$$ = tree->create_tree("Struct_call","op:->",2,$1,$3);
	}
	;

expr_decl:
	type IDENTIFIER {
		$$ = tree->create_tree("Var Declaration","",2,$1,$2);
		Node *node = tree->get_node($1);
		tree->change_type($2,node->type);
	}
	| type pointer {
		//int pointer = tree->create_tree("Pointer Declaration","",1,$3);
		$$ = tree->create_tree("Var Declaration","",2,$1,$2);
	}
	| type array_expr {
		$$ = tree->create_tree("Array Declaration", "", 2, $1, $2);
	}
	;
expr_type :
	expr_set {
		if(tree->get_node($1)->child.at(0)->type=="error") {
			cout << "等号左边变量未声明!" << " Error: " << no <<endl;
		}
		
		tree->change_type($1,"integer");
	}
	| IDENTIFIER {tree->change_type($1,"integer");}
	| type expr_set {
		if(tree->get_node($2)->child.at(1)->type=="error") {
			//cout << "等号右边变量未声明!" <<endl;
		}
		$$ = tree->create_tree("Var Declaration","",2,$1,$2);
		tree->change_type($2,"integer");
		//cout << "*/-*/-/*-" << endl;
		//tree->print_tree();
	}
	| expr_decl {
		tree->change_type($1,"integer");
	}
	| expr_type ',' expr_set {
		$$ = tree->add_child($1, 1, $3);
		tree->change_type($1,"integer");
	}
	| expr_type ',' IDENTIFIER {
		$$ = tree->add_child($1, 1, $3);
		tree->change_type($1,"integer");
	}
	| expr_type ',' pointer {
		//int pointer = tree->create_tree("Pointer Declaration","",1,$4);
		$$ = tree->add_child($1, 1, $3);
	}
	| expr_type ',' array_expr {
		//int pointer = tree->create_tree("Pointer Declaration","",1,$4);
		$$ = tree->add_child($1, 1, $3);
	}
	;

pointer :
	'*' IDENTIFIER {
		//int point = tree->create_tree("Pointer Declaration","",0);
		$$ = tree->create_tree("Pointer Declaration","",1, $2);
	}
	| '*' pointer {
		//int point = tree->create_tree("Pointer Declaration","",0);
		$$ = tree->create_tree("Pointer Declaration","",1, $2);
	}
	;

type :
	INT {
		tree->change_type($$,"integer");
		$$ = $1;
	}
	| VOID {
		tree->change_type($$,"void");
		$$ = $1;
	}
	| FLOAT {
		tree->change_type($$,"float");
		$$ = $1;
	}
	| DOUBLE {
		tree->change_type($$,"double");
		$$ = $1;
	}
	| BOOL {
		tree->change_type($$,"bool");
		$$ = $1;
	}
	| CHAR {
		tree->change_type($$,"char");
		$$ = $1;
	}
	| STRUCT_ID {
		tree->change_type($$,"struct");
		$$ = $1;
	}
	;

expr_setself:
	DEC_OP vari  {
		$$ = tree->create_tree("Expr","op:--v",1,$2);
		tree->change_type($$,"integer");
		//tree->print_tree();
	}
	| INC_OP vari  {
		$$ = tree->create_tree("Expr","op:++v",1,$2);
		tree->change_type($$,"integer");
		//tree->print_tree();
	}
	| vari INC_OP  {
		$$ = tree->create_tree("Expr","op:v++",1,$1);
		tree->change_type($$,"integer");
		//tree->print_tree();
	}
	| vari DEC_OP  {
		$$ = tree->create_tree("Expr","op:v--",1,$1);
		tree->change_type($$,"integer");
		//tree->print_tree();
	}
	| '(' expr_setself ')' {
	// $$ = $2; debug_vsp(yyval, "(ess)", yyvsp, "101");
		tree->change_type($$,"integer");
	}
	;	
expr_comp:
	expr {$$ = tree->create_tree("Expr","",1,$1);tree->change_type($$, "boolean");}
	| '!' expr {
		$$ = tree->create_tree("Expr","op:!",1,$2);
		tree->change_type($$, "boolean");
	}
	| expr_set {tree->change_type($$, "boolean");}
	| expr '<' expr   {
		$$ = tree->create_tree("Expr","op:<",2,$1,$3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no <<endl;
		}
		//tree->print_tree();
	}
	| expr '>' expr   {
		$$ = tree->create_tree("Expr","op:>",2,$1,$3);
		//cout << tree->get_node($1)->type << tree->get_node($3)->type << endl;
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr GE_OP expr    {
		$$ = tree->create_tree("Expr","op:>=",2,$1,$3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr LE_OP expr    {
		$$ = tree->create_tree("Expr","op:<=",2,$1,$3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr NE_OP expr    {
	    $$ = tree->create_tree("Expr","op:!=",2,$1,$3);
	    if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr EQ_OP expr    {
		$$ = tree->create_tree("Expr","op:==",2,$1,$3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr_comp AND_OP expr_comp {
		$$ = tree->create_tree("Expr","op:&&",2,$1,$3);
		if(tree->get_node($1)->type == "boolean" && tree->get_node($3)->type == "boolean") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	}
	| expr_comp OR_OP expr_comp  {
		$$ = tree->create_tree("Expr","op:||",2,$1,$3);
		if(tree->get_node($1)->type == "boolean" && tree->get_node($3)->type == "boolean") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| '(' expr_comp AND_OP expr_comp ')' {
		$$ = tree->create_tree("Expr","op:&&",2,$2,$4);
		if(tree->get_node($2)->type == "boolean" && tree->get_node($4)->type == "boolean") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	}
	| '(' expr_comp OR_OP expr_comp ')' {
		$$ = tree->create_tree("Expr","op:||",2,$2,$4);
		if(tree->get_node($2)->type == "boolean" && tree->get_node($4)->type == "boolean") {
			tree->change_type($$,"boolean");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| '(' expr_comp ')'       {
	//  $$ = $2;                  debug_vsp(yyval, "(ec)", yyvsp, "101");
		tree->change_type($$,tree->get_node($2)->type);
	}
	;
expr:
	NUMBER {
		Node *node = tree->get_node($1);
		if(judge_str(node->value)) {
			tree->change_type($$,"void");
		}
		else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	}
	| IDENTIFIER {
		if(tree->get_node($1)->type == "") {
			tree->change_type($$,"error");
			cout << "等号右边变量未声明!" << " Error: " << no << endl;
		}
		else {
			tree->change_type($$,"void");
		}
	}
	| pointer
	| struct_call
	| array_expr {
		tree->change_type($$,"void");
	}
	| '&' IDENTIFIER {
		$$ = tree->create_tree("Expr", "op:&", 1, $2);
	}
	| '-' NUMBER %prec UMINUS {
		//$$ = set_content(-$2);   debug_vsp(yyval, "-e", yyvsp, "13");
	}
	| expr '+' expr   {
		$$ = tree->create_tree("Expr", "op:+", 2, $1, $3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"void");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr '-' expr   {
		$$ = tree->create_tree("Expr", "op:-", 2, $1, $3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"void");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	}
	| expr '*' expr   {
		$$ = tree->create_tree("Expr", "op:*", 2, $1, $3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"void");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| expr '/' expr   {
		$$ = tree->create_tree("Expr", "op:/", 2, $1, $3);
		if(tree->get_node($1)->type == "void" && tree->get_node($3)->type == "void") {
			tree->change_type($$,"void");
		} else {
			tree->change_type($$,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	}
	| '(' expr ')'    {
		$$ = $2;
		//$$ = $2;                   debug_vsp(yyval, "(e)", yyvsp, "101");
	}
	;
	
array_expr :
	IDENTIFIER array_list {
		$$ = tree->create_tree("Expr", "array", 2, $1, $2);
	}
	;

array_list :
	'[' NUMBER ']' array_list {
		$$ = tree->create_tree("Expr", "op:[]", 2, $2, $4);
	}
	| '[' NUMBER ']' {
		$$ = tree->create_tree("Expr", "op:[]", 1, $2);
	}
	| '[' ']' {
		$$ = tree->create_tree("Expr", "op:[](No number)", 0);
	}
	;
%%


int main() {
	int n = 1;
	mylexer lexer;
	myparser parser;
	freopen("test.txt", "r", stdin);
	
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	tree->print_tree();
	fclose(stdin);
	free(tree);
	return n;
}