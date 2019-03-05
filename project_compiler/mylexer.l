%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 20181022
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <list>
#include <iostream>
#include <string>
#include "myparser.h"
#include "tree.h"
#include "lnode.h"
using namespace std;

vector<string> vec;

int no;

%}

/////////////////////////////////////////////////////////////////////////////
// declarations section
%option yylineno
// lexical analyser name
%name mylexer

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

// place any declarations here
annotation \/\/(.*)?
letter [a-zA-Z]
id ({letter}|[_])({letter}|{digit}|[_])*
digit [0-9]
digits {digit}+
num ({digits})(\.{digits})?([Ee][+-]?digits)?
error_id ([0-9]+)+({letter}|_)+
head #include\<({letter})+(.h)?\>
format \%({num})?({letter})
powerer \^

//symbols ">="|"<="|"=="|"!="|"+="|"-="|"*="|"/="|"++"|"--"
ARROW       "->"
ADD_ASSIGN	\+\=
SUB_ASSIGN	\-\=
MUL_ASSIGN	\*\=
DIV_ASSIGN	\/\=
MOD_ASSIGN	\%\=
RIGHT_OP	\>\>
LEFT_OP		\<\<
INC_OP		\+\+
DEC_OP		\-\-
//PTR_OP		\-\>
AND_OP		"&&"
OR_OP		"||"
LE_OP		\<\=
GE_OP		\>\=
EQ_OP		\=\=
NE_OP		\!\=


whitespace [ \t]+
enter [\n]+

//type "int"|"float"|"char"|"double"
INT			"int"
FLOAT		"float"
CHAR		"char"
DOUBLE		"double"

//keys "else"|"return"|"void"|"if"|"while"|"for"|"main"|"printf"
BOOL		"bool"
BREAK		"break"
CASE		"case"
CONTINUE	"continue"
DO			"do"
ELSE		"else"
FOR			"for"
GOTO		"goto"
IF			"if"
RETURN		"return"
SWITCH		"switch"
VOID		"void"
WHILE		"while"
TRUE		"true"
FALSE		"false"
MAIN		"main"
//PRINTF		"printf"
SCANF		"scanf"
PRINT		"print"|"printf"

lp \(
rp \)
semicolon \;
assign \=
less \<
more \>
add \+
minus \-
lbrace \{
rbrace \}
multy \*
div \/
dot \.
and &&
or \|\|
not \!
remainder \%
squotes \'
dquotes \"
comma \,
COLON \:
LBRACKET \[
RBRACKET \]
QUESTION \?
BITAND \&
BITNEGATION \~
BITOR \|
struct "struct"
errors .
ann \/\*[^*]*[*]+([^*/][^*]*[*]+)*[*]*\/
%%

/////////////////////////////////////////////////////////////////////////////
// rules section
%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}
{ann}  {}
{annotation} {
	//void storeNorm(string e, string v);
	storeNorm("ANNOTATION", yytext);
	//yylval.integer = tree->create_tree("ANNOTATION", yytext, 0);
	//cout << yytext << endl;
	//return ANNOTATION;
}

{INT}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("INT", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return INT;
}

{FLOAT}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FLOAT", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return FLOAT;
}

{CHAR}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CHAR", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return CHAR;
}

{DOUBLE}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DOUBLE", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return DOUBLE;
}

{BOOL}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BOOL", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return BOOL;
}

{BREAK}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BREAK", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return BREAK;
}

{CASE}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CASE", yytext);
	yylval.integer = tree->create_tree("Labeled Statement", yytext, 0);
	return CASE;
}

{CONTINUE}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CONTINUE", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return CONTINUE;
}

{DO}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DO", yytext);
//	yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return DO;
}

{ELSE}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ELSE", yytext);
	//yylval.integer = tree->create_tree("Selection statment", yytext, 0);
	return ELSE;
}

{FOR}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FOR", yytext);
	//yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return FOR;
}

{GOTO}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("GOTO", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return GOTO;
}

{IF}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("IF", yytext);
	//yylval.integer = tree->create_tree("Selection Statement", yytext, 0);
	return IF;
}

{RETURN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RETURN", yytext);
	//yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return RETURN;
}

{SWITCH}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SWITCH", yytext);
	yylval.integer = tree->create_tree("Selection Statement", yytext, 0);
	return SWITCH;
}

{VOID}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("VOID", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return VOID;
}

{WHILE}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("WHILE", yytext);
	//yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return WHILE;
}

{TRUE}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("TRUE", yytext);
	yylval.integer = tree->create_tree("Primary Expression", yytext, 0);
	return TRUE;
}

{FALSE}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FALSE", yytext);
	yylval.integer = tree->create_tree("Primary Expression", yytext, 0);
	return FALSE;
}

{MAIN}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MAIN", yytext);
	//yylval.integer = tree->create_tree("MAIN", yytext, 0);
	return MAIN;
}

/*{PRINTF}	{
	void storeNorm(string e, string v);
	storeNorm("PRINTF", yytext);
	yylval.integer = tree->create_tree("PRINTF", yytext, 0);
	return PRINTF;
}*/
{ARROW}     {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ARROW", yytext);
	return ARROW;
}
{SCANF}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SCANF", yytext);
	yylval.integer = tree->create_tree("SCANF", yytext, 0);
	return SCANF;
}
{PRINT}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("PRINT", yytext);
	//yylval.integer = tree->create_tree("PRINT", yytext, 0);
	return PRINT;
}

{struct} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("STRUCT", yytext);
	//yylval.integer = tree->create_tree("STRUCT", yytext, 0);
	return STRUCT;
}

{head} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("HEAD", yytext);
	yylval.integer = tree->create_tree("HEAD", yytext, 0);
	return HEAD;
}

{error_id} {
	printf("error!\t\t%s\n", yytext);
}

{id} {
	//string **storeSpec(string e, string v);
	//bool judgeStruct();
	no = yylineno;
	if(judgeStruct()) {
		vec.push_back(yytext);
		string **addr = storeSpec("STRUCT_ID", yytext);
		yylval.integer = tree->create_tree("Struct ID", yytext, 0);
		return IDENTIFIER;
	}
	else {
		vector<string>::iterator it;
		it=find(vec.begin(),vec.end(),yytext);
		if (it!=vec.end()){
			string **addr = storeSpec("STRUCT_ID", yytext);
			yylval.integer = tree->create_tree("Struct ID", yytext, 0);
			return STRUCT_ID;
		}
		else{
			string **addr = storeSpec("ID", yytext);
			yylval.integer = tree->create_tree("ID Declaration", yytext, 0);
			return IDENTIFIER;
		}
	}
}

{num} {
	//string storeNum(string e, string v);
	no = yylineno;
	storeNum("NUMBER", yytext);
	yylval.integer = tree->create_tree("Const Declaration", yytext, 0);
	return NUMBER;
}

{format} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FORMAT", yytext);
	yylval.integer = tree->create_tree("FORMAT", yytext, 0);
	return FORMAT;
}

{ADD_ASSIGN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ADD_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return ADD_ASSIGN;
}

{SUB_ASSIGN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SUB_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return SUB_ASSIGN;
}

{MUL_ASSIGN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MUL_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return MUL_ASSIGN;
}

{DIV_ASSIGN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DIV_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return DIV_ASSIGN;
}

{MOD_ASSIGN}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MOD_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return MOD_ASSIGN;
}

{RIGHT_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RIGHT_OP", yytext);
	// yylval.integer = tree->create_tree("Shift Expression", yytext, 0);
	return RIGHT_OP;
}

{LEFT_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LEFT_OP", yytext);
	// yylval.integer = tree->create_tree("Shift Expression", yytext, 0);
	return LEFT_OP;
}

{INC_OP}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("INC_OP", yytext);
	// yylval.integer = tree->create_tree("Postfix Expression", yytext, 0);
	return INC_OP;
}

{DEC_OP}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DEC_OP", yytext);
	// yylval.integer = tree->create_tree("Postfix Expression", yytext, 0);
	return DEC_OP;
}

/*{PTR_OP}	{
	void storeNorm(string e, string v);
	storeNorm("PTR_OP", yytext);
	// yylval.integer = tree->create_tree("PTR_OP", yytext, 0);
	return PTR_OP;
}*/

{AND_OP} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("AND", yytext);
	// yylval.integer = tree->create_tree("Logical And Expression", yytext, 0);
	return AND_OP;
}
{OR_OP} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("OR", yytext);
	// yylval.integer = tree->create_tree("Logical Or Expression", yytext, 0);
	return OR_OP;
}

{LE_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LE_OP", yytext);
	// yylval.integer = tree->create_tree("Relational Expression", yytext, 0);
	return LE_OP;
}

{GE_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("GE_OP", yytext);
	// yylval.integer = tree->create_tree("Relational Expression", yytext, 0);
	return GE_OP;
}

{EQ_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("EQ_OP", yytext);
	// yylval.integer = tree->create_tree("Equality Expression", yytext, 0);
	return EQ_OP;
}

{NE_OP}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("NE_OP", yytext);
	// yylval.integer = tree->create_tree("Equality Expression", yytext, 0);
	return NE_OP;
}

{semicolon} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SEMICOLON", yytext);
	//yylval.integer = tree->create_tree(";", yytext, 0);
	return ';';
}

{comma} 	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("COMMA", yytext);
	//yylval.integer = tree->create_tree(",", yytext, 0);
	return ',';
}

{COLON}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("COLON", yytext);
	// yylval.integer = tree->create_tree(":", yytext, 0);
	return ':';
}

{assign} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ASSIGN", yytext);
	//yylval.integer = tree->create_tree("=", yytext, 0);
	return '=';
}

{LBRACKET}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LBRACKET", yytext);
	// yylval.integer = tree->create_tree("[", yytext, 0);
	return '[';
}

{RBRACKET}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RBRACKET", yytext);
	// yylval.integer = tree->create_tree("]", yytext, 0);
	return ']';
}

{dot} 		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DOT", yytext);
	// yylval.integer = tree->create_tree(".", yytext, 0);
	return '.';
}

{BITAND}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITAND", yytext);
	// yylval.integer = tree->create_tree("&", yytext, 0);
	return '&';
}

{not} 		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("NOT", yytext);
	// yylval.integer = tree->create_tree("!", yytext, 0);
	return '!';
}

{BITNEGATION}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITNEGATION", yytext);
	// yylval.integer = tree->create_tree("~", yytext, 0);
	return '~';
}

{minus} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MINUS", yytext);
	// yylval.integer = tree->create_tree("-", yytext, 0);
	return '-';
}

{add} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ADD", yytext);
	// yylval.integer = tree->create_tree("=", yytext, 0);
	return '+';
}

{multy} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MULTY", yytext);
	// yylval.integer = tree->create_tree("*", yytext, 0);
	return '*';
}

{div} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DIV", yytext);
	// yylval.integer = tree->create_tree("/", yytext, 0);
	return '/';
}

{remainder} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("REMAINDER", yytext);
	// yylval.integer = tree->create_tree("%", yytext, 0);
	return '%';
}

{less} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LESS", yytext);
	// yylval.integer = tree->create_tree("<", yytext, 0);
	return '<';
}

{more} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MORE", yytext);
	// yylval.integer = tree->create_tree(">", yytext, 0);
	return '>';
}

{powerer} {
    //void storeNorm(string e, string v);
	no = yylineno;
    storeNorm("POWER", yytext);
	// yylval.integer = tree->create_tree("^", yytext, 0);
	return '^';
}

{BITOR}		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITOR", yytext);
	// yylval.integer = tree->create_tree("|", yytext, 0);
	return '|';
}

{QUESTION}	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("QUESTION", yytext);
	// yylval.integer = tree->create_tree("?", yytext, 0);
	return '\?';
}

{lbrace} 	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LBRACE", yytext);
	// yylval.integer = tree->create_tree("{", yytext, 0);
	return '{';
}

{rbrace} 	{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RBRACE", yytext);
	// yylval.integer = tree->create_tree("}", yytext, 0);
	return '}';
}

{lp} 		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LP", yytext);
	// yylval.integer = tree->create_tree("(", yytext, 0);
	return '(';
}

{rp} 		{
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RP", yytext);
	// yylval.integer = tree->create_tree(")", yytext, 0);
	return ')';
}

{squotes} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SQUOTES", yytext);
	// yylval.integer = tree->create_tree("\'", yytext, 0);
	return '\'';
}

{dquotes} {
	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DQUOTES", yytext);
	// yylval.integer = tree->create_tree("\"", yytext, 0);
	return '\"';
}

{whitespace} {}

{enter} {}

{errors} {
}
// place your Lex rules here

%%

/////////////////////////////////////////////////////////////////////////////
// programs section
