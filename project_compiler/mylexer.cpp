/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 85 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 01/02/19
* Time: 17:24:14
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

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


#line 63 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 38 ".\\mylexer.l"

	// place any extra initialisation code here

#line 87 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 43 ".\\mylexer.l"

	// place any extra cleanup code here

#line 99 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 143 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 170 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 147 ".\\mylexer.l"

#line 177 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 148 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	storeNorm("ANNOTATION", yytext);
	//yylval.integer = tree->create_tree("ANNOTATION", yytext, 0);
	//cout << yytext << endl;
	//return ANNOTATION;

#line 190 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 156 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("INT", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return INT;

#line 203 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 164 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FLOAT", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return FLOAT;

#line 216 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 172 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CHAR", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return CHAR;

#line 229 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 180 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DOUBLE", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return DOUBLE;

#line 242 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 188 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BOOL", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return BOOL;

#line 255 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 196 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BREAK", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return BREAK;

#line 268 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 204 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CASE", yytext);
	yylval.integer = tree->create_tree("Labeled Statement", yytext, 0);
	return CASE;

#line 281 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 212 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("CONTINUE", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return CONTINUE;

#line 294 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 220 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DO", yytext);
//	yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return DO;

#line 307 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 228 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ELSE", yytext);
	//yylval.integer = tree->create_tree("Selection statment", yytext, 0);
	return ELSE;

#line 320 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 236 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FOR", yytext);
	//yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return FOR;

#line 333 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 244 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("GOTO", yytext);
	yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return GOTO;

#line 346 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 252 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("IF", yytext);
	//yylval.integer = tree->create_tree("Selection Statement", yytext, 0);
	return IF;

#line 359 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 260 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RETURN", yytext);
	//yylval.integer = tree->create_tree("Jump Statement", yytext, 0);
	return RETURN;

#line 372 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 268 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SWITCH", yytext);
	yylval.integer = tree->create_tree("Selection Statement", yytext, 0);
	return SWITCH;

#line 385 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 276 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("VOID", yytext);
	yylval.integer = tree->create_tree("Type Specifier", yytext, 0);
	return VOID;

#line 398 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 284 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("WHILE", yytext);
	//yylval.integer = tree->create_tree("Iteration Statement", yytext, 0);
	return WHILE;

#line 411 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 292 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("TRUE", yytext);
	yylval.integer = tree->create_tree("Primary Expression", yytext, 0);
	return TRUE;

#line 424 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 300 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FALSE", yytext);
	yylval.integer = tree->create_tree("Primary Expression", yytext, 0);
	return FALSE;

#line 437 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 308 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MAIN", yytext);
	//yylval.integer = tree->create_tree("MAIN", yytext, 0);
	return MAIN;

#line 450 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 322 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ARROW", yytext);
	return ARROW;

#line 462 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 328 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SCANF", yytext);
	yylval.integer = tree->create_tree("SCANF", yytext, 0);
	return SCANF;

#line 475 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 335 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("PRINT", yytext);
	//yylval.integer = tree->create_tree("PRINT", yytext, 0);
	return PRINT;

#line 488 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 343 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("STRUCT", yytext);
	//yylval.integer = tree->create_tree("STRUCT", yytext, 0);
	return STRUCT;

#line 501 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 351 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("HEAD", yytext);
	yylval.integer = tree->create_tree("HEAD", yytext, 0);
	return HEAD;

#line 514 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 359 ".\\mylexer.l"

	printf("error!\t\t%s\n", yytext);

#line 523 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 363 ".\\mylexer.l"

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

#line 554 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 389 ".\\mylexer.l"

	//string storeNum(string e, string v);
	no = yylineno;
	storeNum("NUMBER", yytext);
	yylval.integer = tree->create_tree("Const Declaration", yytext, 0);
	return NUMBER;

#line 567 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 397 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("FORMAT", yytext);
	yylval.integer = tree->create_tree("FORMAT", yytext, 0);
	return FORMAT;

#line 580 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 405 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ADD_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return ADD_ASSIGN;

#line 593 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 413 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SUB_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return SUB_ASSIGN;

#line 606 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 421 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MUL_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return MUL_ASSIGN;

#line 619 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 429 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DIV_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return DIV_ASSIGN;

#line 632 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 437 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MOD_ASSIGN", yytext);
	// yylval.integer = tree->create_tree("Assignment Operator", yytext, 0);
	return MOD_ASSIGN;

#line 645 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 445 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RIGHT_OP", yytext);
	// yylval.integer = tree->create_tree("Shift Expression", yytext, 0);
	return RIGHT_OP;

#line 658 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 453 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LEFT_OP", yytext);
	// yylval.integer = tree->create_tree("Shift Expression", yytext, 0);
	return LEFT_OP;

#line 671 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 461 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("INC_OP", yytext);
	// yylval.integer = tree->create_tree("Postfix Expression", yytext, 0);
	return INC_OP;

#line 684 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 469 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DEC_OP", yytext);
	// yylval.integer = tree->create_tree("Postfix Expression", yytext, 0);
	return DEC_OP;

#line 697 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 484 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("AND", yytext);
	// yylval.integer = tree->create_tree("Logical And Expression", yytext, 0);
	return AND_OP;

#line 710 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 491 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("OR", yytext);
	// yylval.integer = tree->create_tree("Logical Or Expression", yytext, 0);
	return OR_OP;

#line 723 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 499 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LE_OP", yytext);
	// yylval.integer = tree->create_tree("Relational Expression", yytext, 0);
	return LE_OP;

#line 736 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 507 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("GE_OP", yytext);
	// yylval.integer = tree->create_tree("Relational Expression", yytext, 0);
	return GE_OP;

#line 749 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 515 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("EQ_OP", yytext);
	// yylval.integer = tree->create_tree("Equality Expression", yytext, 0);
	return EQ_OP;

#line 762 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 523 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("NE_OP", yytext);
	// yylval.integer = tree->create_tree("Equality Expression", yytext, 0);
	return NE_OP;

#line 775 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 531 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SEMICOLON", yytext);
	//yylval.integer = tree->create_tree(";", yytext, 0);
	return ';';

#line 788 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 539 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("COMMA", yytext);
	//yylval.integer = tree->create_tree(",", yytext, 0);
	return ',';

#line 801 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 547 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("COLON", yytext);
	// yylval.integer = tree->create_tree(":", yytext, 0);
	return ':';

#line 814 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 555 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ASSIGN", yytext);
	//yylval.integer = tree->create_tree("=", yytext, 0);
	return '=';

#line 827 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 563 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LBRACKET", yytext);
	// yylval.integer = tree->create_tree("[", yytext, 0);
	return '[';

#line 840 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 571 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RBRACKET", yytext);
	// yylval.integer = tree->create_tree("]", yytext, 0);
	return ']';

#line 853 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 579 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DOT", yytext);
	// yylval.integer = tree->create_tree(".", yytext, 0);
	return '.';

#line 866 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 587 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITAND", yytext);
	// yylval.integer = tree->create_tree("&", yytext, 0);
	return '&';

#line 879 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 595 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("NOT", yytext);
	// yylval.integer = tree->create_tree("!", yytext, 0);
	return '!';

#line 892 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 603 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITNEGATION", yytext);
	// yylval.integer = tree->create_tree("~", yytext, 0);
	return '~';

#line 905 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 611 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MINUS", yytext);
	// yylval.integer = tree->create_tree("-", yytext, 0);
	return '-';

#line 918 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 619 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("ADD", yytext);
	// yylval.integer = tree->create_tree("=", yytext, 0);
	return '+';

#line 931 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 627 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MULTY", yytext);
	// yylval.integer = tree->create_tree("*", yytext, 0);
	return '*';

#line 944 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 635 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DIV", yytext);
	// yylval.integer = tree->create_tree("/", yytext, 0);
	return '/';

#line 957 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 643 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("REMAINDER", yytext);
	// yylval.integer = tree->create_tree("%", yytext, 0);
	return '%';

#line 970 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 651 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LESS", yytext);
	// yylval.integer = tree->create_tree("<", yytext, 0);
	return '<';

#line 983 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 659 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("MORE", yytext);
	// yylval.integer = tree->create_tree(">", yytext, 0);
	return '>';

#line 996 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 667 ".\\mylexer.l"

    //void storeNorm(string e, string v);
	no = yylineno;
    storeNorm("POWER", yytext);
	// yylval.integer = tree->create_tree("^", yytext, 0);
	return '^';

#line 1009 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 675 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("BITOR", yytext);
	// yylval.integer = tree->create_tree("|", yytext, 0);
	return '|';

#line 1022 "mylexer.cpp"
		}
		break;
	case 66:
		{
#line 683 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("QUESTION", yytext);
	// yylval.integer = tree->create_tree("?", yytext, 0);
	return '\?';

#line 1035 "mylexer.cpp"
		}
		break;
	case 67:
		{
#line 691 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LBRACE", yytext);
	// yylval.integer = tree->create_tree("{", yytext, 0);
	return '{';

#line 1048 "mylexer.cpp"
		}
		break;
	case 68:
		{
#line 699 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RBRACE", yytext);
	// yylval.integer = tree->create_tree("}", yytext, 0);
	return '}';

#line 1061 "mylexer.cpp"
		}
		break;
	case 69:
		{
#line 707 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("LP", yytext);
	// yylval.integer = tree->create_tree("(", yytext, 0);
	return '(';

#line 1074 "mylexer.cpp"
		}
		break;
	case 70:
		{
#line 715 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("RP", yytext);
	// yylval.integer = tree->create_tree(")", yytext, 0);
	return ')';

#line 1087 "mylexer.cpp"
		}
		break;
	case 71:
		{
#line 723 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("SQUOTES", yytext);
	// yylval.integer = tree->create_tree("\'", yytext, 0);
	return '\'';

#line 1100 "mylexer.cpp"
		}
		break;
	case 72:
		{
#line 731 ".\\mylexer.l"

	//void storeNorm(string e, string v);
	no = yylineno;
	storeNorm("DQUOTES", yytext);
	// yylval.integer = tree->create_tree("\"", yytext, 0);
	return '\"';

#line 1113 "mylexer.cpp"
		}
		break;
	case 73:
		{
#line 739 ".\\mylexer.l"

#line 1120 "mylexer.cpp"
		}
		break;
	case 74:
		{
#line 741 ".\\mylexer.l"

#line 1127 "mylexer.cpp"
		}
		break;
	case 75:
		{
#line 743 ".\\mylexer.l"


#line 1135 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 570;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 5, 1 },
		{ 88, 41 },
		{ 56, 15 },
		{ 4, 4 },
		{ 98, 98 },
		{ 74, 32 },
		{ 83, 37 },
		{ 72, 31 },
		{ 93, 44 },
		{ 127, 98 },
		{ 73, 31 },
		{ 100, 128 },
		{ 75, 32 },
		{ 100, 128 },
		{ 84, 37 },
		{ 125, 97 },
		{ 94, 46 },
		{ 125, 97 },
		{ 89, 41 },
		{ 76, 32 },
		{ 57, 15 },
		{ 90, 41 },
		{ 4, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 4, 4 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 0, 64 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 0, 190 },
		{ 29, 1 },
		{ 30, 1 },
		{ 27, 1 },
		{ 0, 64 },
		{ 27, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 27, 1 },
		{ 37, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 38, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 39, 1 },
		{ 27, 1 },
		{ 40, 1 },
		{ 41, 1 },
		{ 42, 1 },
		{ 27, 1 },
		{ 43, 1 },
		{ 44, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 45, 1 },
		{ 46, 1 },
		{ 47, 1 },
		{ 48, 1 },
		{ 61, 19 },
		{ 79, 35 },
		{ 70, 25 },
		{ 71, 25 },
		{ 95, 50 },
		{ 62, 19 },
		{ 67, 23 },
		{ 68, 23 },
		{ 49, 6 },
		{ 98, 61 },
		{ 0, 62 },
		{ 50, 8 },
		{ 80, 35 },
		{ 5, 5 },
		{ 102, 72 },
		{ 81, 35 },
		{ 103, 73 },
		{ 189, 190 },
		{ 104, 74 },
		{ 63, 19 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 105, 75 },
		{ 106, 76 },
		{ 107, 77 },
		{ 108, 78 },
		{ 109, 79 },
		{ 110, 80 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 190, 190 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 111, 81 },
		{ 112, 82 },
		{ 113, 84 },
		{ 114, 85 },
		{ 115, 86 },
		{ 116, 87 },
		{ 117, 88 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 100, 66 },
		{ 118, 89 },
		{ 100, 66 },
		{ 119, 90 },
		{ 27, 183 },
		{ 120, 91 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 27, 183 },
		{ 0, 9 },
		{ 64, 20 },
		{ 58, 17 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 121, 92 },
		{ 122, 93 },
		{ 52, 9 },
		{ 123, 95 },
		{ 77, 33 },
		{ 59, 17 },
		{ 60, 17 },
		{ 78, 34 },
		{ 54, 10 },
		{ 82, 36 },
		{ 53, 9 },
		{ 66, 20 },
		{ 101, 66 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 129, 100 },
		{ 130, 101 },
		{ 131, 102 },
		{ 53, 9 },
		{ 66, 20 },
		{ 132, 103 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 187, 184 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 133, 104 },
		{ 134, 105 },
		{ 135, 106 },
		{ 136, 107 },
		{ 137, 108 },
		{ 138, 109 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 53, 185 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 139, 110 },
		{ 140, 112 },
		{ 141, 114 },
		{ 142, 115 },
		{ 65, 178 },
		{ 143, 116 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 65, 178 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 124, 124 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 99, 99 },
		{ 144, 117 },
		{ 97, 124 },
		{ 145, 118 },
		{ 146, 119 },
		{ 147, 120 },
		{ 148, 121 },
		{ 149, 122 },
		{ 150, 123 },
		{ 55, 14 },
		{ 126, 125 },
		{ 96, 51 },
		{ 128, 99 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 51, 51 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 124, 96 },
		{ 151, 126 },
		{ 97, 124 },
		{ 85, 38 },
		{ 152, 129 },
		{ 153, 130 },
		{ 154, 132 },
		{ 155, 135 },
		{ 156, 136 },
		{ 157, 138 },
		{ 158, 139 },
		{ 159, 142 },
		{ 128, 99 },
		{ 160, 143 },
		{ 161, 144 },
		{ 162, 145 },
		{ 163, 146 },
		{ 164, 149 },
		{ 165, 150 },
		{ 166, 151 },
		{ 167, 152 },
		{ 168, 153 },
		{ 169, 155 },
		{ 170, 156 },
		{ 171, 159 },
		{ 172, 160 },
		{ 173, 162 },
		{ 174, 163 },
		{ 175, 165 },
		{ 176, 166 },
		{ 177, 167 },
		{ 178, 168 },
		{ 179, 169 },
		{ 180, 175 },
		{ 181, 176 },
		{ 182, 177 },
		{ 86, 39 },
		{ 183, 179 },
		{ 184, 180 },
		{ 185, 181 },
		{ 186, 182 },
		{ 87, 40 },
		{ 69, 24 },
		{ 91, 42 },
		{ 191, 189 },
		{ 92, 43 },
		{ 192, 191 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 75 },
		{ 0, -4, 73 },
		{ 0, 122, 74 },
		{ 0, 66, 55 },
		{ 0, 0, 72 },
		{ 0, 25, 75 },
		{ 51, 226, 61 },
		{ 0, 255, 54 },
		{ 0, 0, 71 },
		{ 0, 0, 69 },
		{ 0, 0, 70 },
		{ 0, 439, 59 },
		{ 0, -39, 58 },
		{ 0, 0, 48 },
		{ 0, 229, 57 },
		{ 0, 0, 53 },
		{ 0, 77, 60 },
		{ 178, 227, 30 },
		{ 0, 0, 49 },
		{ 0, 0, 47 },
		{ 0, 65, 62 },
		{ 0, 504, 50 },
		{ 0, 60, 63 },
		{ 0, 0, 66 },
		{ 183, 0, 29 },
		{ 0, 0, 51 },
		{ 0, 0, 52 },
		{ 0, 0, 64 },
		{ 183, -102, 29 },
		{ 183, -90, 29 },
		{ 183, 178, 29 },
		{ 183, 184, 29 },
		{ 183, 23, 29 },
		{ 183, 183, 29 },
		{ 183, -94, 29 },
		{ 183, 429, 29 },
		{ 183, 445, 29 },
		{ 183, 463, 29 },
		{ 183, -96, 29 },
		{ 183, 452, 29 },
		{ 183, 457, 29 },
		{ 183, -94, 29 },
		{ 0, 0, 67 },
		{ 0, -106, 65 },
		{ 0, 0, 68 },
		{ 0, 0, 56 },
		{ 0, 0, 46 },
		{ 0, 13, 0 },
		{ 124, 456, 0 },
		{ 0, 0, 36 },
		{ 0, 0, 31 },
		{ 0, 0, 41 },
		{ 0, 0, 34 },
		{ 0, 0, 39 },
		{ 0, 0, 32 },
		{ 0, 0, 40 },
		{ 0, 0, 33 },
		{ 0, 0, 23 },
		{ -61, 86, 0 },
		{ -62, 119, 2 },
		{ 0, 0, 35 },
		{ 99, -13, 0 },
		{ 178, 0, 28 },
		{ 178, 197, 28 },
		{ 0, 0, 38 },
		{ 0, 0, 43 },
		{ 0, 0, 45 },
		{ 0, 0, 44 },
		{ 0, 0, 37 },
		{ 183, 22, 29 },
		{ 183, 34, 29 },
		{ 183, 22, 29 },
		{ 183, 68, 29 },
		{ 183, 56, 29 },
		{ 183, 50, 11 },
		{ 183, 53, 29 },
		{ 183, 61, 29 },
		{ 183, 59, 29 },
		{ 183, 93, 29 },
		{ 183, 92, 29 },
		{ 183, 0, 15 },
		{ 183, 93, 29 },
		{ 183, 105, 29 },
		{ 183, 106, 29 },
		{ 183, 96, 29 },
		{ 183, 116, 29 },
		{ 183, 127, 29 },
		{ 183, 138, 29 },
		{ 183, 128, 29 },
		{ 183, 180, 29 },
		{ 183, 181, 29 },
		{ 0, 0, 42 },
		{ 0, 189, 0 },
		{ 0, 466, 0 },
		{ 125, -26, 31 },
		{ -61, -36, 0 },
		{ 0, 434, 30 },
		{ 0, 224, 0 },
		{ 178, 220, 28 },
		{ 183, 218, 29 },
		{ 183, 232, 29 },
		{ 183, 281, 29 },
		{ 183, 269, 29 },
		{ 183, 268, 29 },
		{ 183, 287, 29 },
		{ 183, 285, 29 },
		{ 183, 272, 29 },
		{ 183, 343, 29 },
		{ 183, 0, 13 },
		{ 183, 330, 29 },
		{ 183, 0, 3 },
		{ 183, 332, 29 },
		{ 183, 333, 29 },
		{ 183, 328, 29 },
		{ 183, 382, 29 },
		{ 183, 377, 29 },
		{ 183, 379, 29 },
		{ 183, 395, 29 },
		{ 183, 397, 29 },
		{ 183, 390, 29 },
		{ 0, 391, 0 },
		{ 185, 424, 0 },
		{ 0, 401, 0 },
		{ 0, 419, 0 },
		{ 0, 0, 1 },
		{ 100, -30, 0 },
		{ 0, 422, 0 },
		{ 178, 425, 28 },
		{ 183, 0, 7 },
		{ 183, 422, 29 },
		{ 183, 0, 9 },
		{ 183, 0, 5 },
		{ 183, 425, 29 },
		{ 183, 423, 29 },
		{ 183, 0, 12 },
		{ 183, 431, 29 },
		{ 183, 417, 29 },
		{ 183, 0, 14 },
		{ 183, 0, 22 },
		{ 183, 418, 29 },
		{ 183, 422, 29 },
		{ 183, 435, 29 },
		{ 183, 439, 29 },
		{ 183, 440, 29 },
		{ 183, 0, 20 },
		{ 183, 0, 18 },
		{ 183, 439, 29 },
		{ 0, 424, 0 },
		{ 0, 439, 0 },
		{ 0, 440, 0 },
		{ 178, 439, 28 },
		{ 183, 0, 8 },
		{ 183, 435, 29 },
		{ 183, 445, 29 },
		{ 183, 0, 21 },
		{ 183, 0, 4 },
		{ 183, 445, 25 },
		{ 183, 438, 29 },
		{ 183, 0, 24 },
		{ 183, 433, 29 },
		{ 183, 446, 29 },
		{ 183, 0, 19 },
		{ 0, 451, 0 },
		{ 0, 447, 0 },
		{ 0, 448, 0 },
		{ 178, 438, 28 },
		{ 183, 438, 29 },
		{ 183, 0, 6 },
		{ 183, 0, 25 },
		{ 183, 0, 16 },
		{ 183, 0, 26 },
		{ 183, 0, 17 },
		{ 0, 455, 0 },
		{ 0, 441, 0 },
		{ 0, 442, 0 },
		{ 0, 349, 28 },
		{ 183, 459, 29 },
		{ 0, 501, 0 },
		{ 0, 447, 0 },
		{ 0, 448, 0 },
		{ 0, 149, 10 },
		{ 0, 233, 0 },
		{ 0, 291, 0 },
		{ 0, 0, 30 },
		{ 190, 0, 0 },
		{ 189, 0, 0 },
		{ 0, 463, 27 },
		{ -188, 74, 0 },
		{ 0, 507, 0 },
		{ 0, 0, 27 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 747 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section

