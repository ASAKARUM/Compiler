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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 01/02/19
* Time: 17:24:14
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

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

#line 60 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 34 ".\\myparser.y"

	// place any extra initialisation code here

#line 84 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 39 ".\\myparser.y"

	// place any extra cleanup code here

#line 98 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 82 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 2).integer,1,yyattribute(2 - 2).integer); 
#line 208 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 83 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Program","",1,yyattribute(1 - 1).integer); 
#line 221 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 88 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Function Definition","",2,yyattribute(1 - 2).integer,yyattribute(2 - 2).integer);
#line 235 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 95 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Struct Definition","",2,yyattribute(2 - 4).integer,yyattribute(3 - 4).integer);
	
#line 250 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 101 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Main Declaration", "", 1, yyattribute(1 - 4).integer);
		//tree->print_tree();
	
#line 266 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 105 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Function Declaration", "", 1, yyattribute(1 - 3).integer);
		//tree->print_tree();
	
#line 282 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 109 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Function Declaration", "", 2, yyattribute(1 - 4).integer,yyattribute(3 - 4).integer);
		//tree->print_tree();
	
#line 298 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 116 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Function Call","",1,yyattribute(1 - 3).integer);
#line 311 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Function Call","",2,yyattribute(1 - 4).integer,yyattribute(3 - 4).integer);
#line 324 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 121 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer,1,yyattribute(3 - 3).integer);
#line 337 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 122 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Real Parameter", "",1,yyattribute(1 - 1).integer);
#line 350 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 126 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer,1,yyattribute(3 - 3).integer); 
#line 363 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 127 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Parameter Declaration","",1,yyattribute(1 - 1).integer);
#line 376 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 131 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("None statement", "", 0);
	
#line 391 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 139 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("WriteK statement", "print", 1, yyattribute(3 - 5).integer);
		//tree->print_tree();
	
#line 407 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 143 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("WriteK statement", "print", 1, yyattribute(3 - 5).integer);
		//tree->print_tree();
	
#line 423 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 147 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("WriteK statement", "scanf", 1, yyattribute(3 - 5).integer);
		//tree->print_tree();
	
#line 439 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 151 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("WriteK statement", "scanf", 1, yyattribute(3 - 5).integer);
		//tree->print_tree();
	
#line 455 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 155 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("RepeatK statement","for",4,yyattribute(3 - 9).integer,yyattribute(5 - 9).integer,yyattribute(7 - 9).integer,yyattribute(9 - 9).integer);
		//tree->print_tree();
	
#line 471 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 159 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("RepeatK statement","while",2,yyattribute(3 - 5).integer,yyattribute(5 - 5).integer);
		//tree->print_tree();
	
#line 487 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 163 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("RepeatK statement","do-while",2,yyattribute(2 - 6).integer,yyattribute(5 - 6).integer);
		//tree->print_tree();
	
#line 503 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 167 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("ConditionK statement","if",2,yyattribute(3 - 5).integer,yyattribute(5 - 5).integer);
		//tree->print_tree();
	
#line 519 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 171 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("ConditionK statement","if-else",3,yyattribute(3 - 7).integer,yyattribute(5 - 7).integer,yyattribute(7 - 7).integer);
		//tree->print_tree();
	
#line 535 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 175 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Return statement","return",1,yyattribute(2 - 2).integer);
	
#line 550 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 178 ".\\myparser.y"

		//$$ = tree->add_child("CompoundK statement","",1,$2);
		//tree->print_tree();
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(2 - 3).integer;
	
#line 567 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 183 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("CompoundK statement","Non stmt",0);
		//tree->print_tree();
	
#line 583 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#line 192 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("None expr","",0);
#line 591 "myparser.cpp"
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 196 ".\\myparser.y"

	
#line 604 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#line 198 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("None expr","",0);
	
#line 614 "myparser.cpp"
		}
		break;
	case 29:
		{
#line 205 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("None expr","",0);
#line 621 "myparser.cpp"
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 209 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("CompoundK statement","",1,yyattribute(1 - 1).integer);
#line 633 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 210 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 2).integer,1,yyattribute(2 - 2).integer);
		//tree->print_tree();
	
#line 649 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 217 ".\\myparser.y"

		if(tree->get_node(yyattribute(1 - 1).integer)->type == "") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			/*cout << "变量未声明!" << endl;*/
		}
		else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		}
		// cout << tree->get_node($1)->value << endl;
	
#line 671 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 232 ".\\myparser.y"

		//cout << tree->get_node($$)->type << endl;
		/*if (tree->get_node($3)->type=="error") {
			cout << "不能将非int类型的值分配到int类型的实体!" <<endl;
		}*/
		//tree->change_type($$,"void");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 692 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 241 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",2,yyattribute(1 - 5).integer,yyattribute(4 - 5).integer);
	
#line 707 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 244 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",1,yyattribute(1 - 4).integer);
	
#line 722 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 247 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	
#line 737 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 250 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 753 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 254 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:+=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 769 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 258 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:-=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 785 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 262 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:*=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 801 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 266 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:/=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 817 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 270 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:%=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 833 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 274 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:+=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 849 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 278 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:-=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 865 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 282 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:*=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 881 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 286 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:/=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 897 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 290 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:%=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//tree->print_tree();
	
#line 913 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 294 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	
#line 928 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 307 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer,1,yyattribute(3 - 3).integer);
	
#line 943 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 310 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Array element","",1,yyattribute(1 - 1).integer);
	
#line 958 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 313 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 5).integer,1,yyattribute(4 - 5).integer);
	
#line 973 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 316 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Array element","",1,yyattribute(2 - 3).integer);
	
#line 988 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 322 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Struct_call","op:.",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	
#line 1003 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 325 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Struct_call","op:->",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	
#line 1018 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 328 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Struct_call","op:->",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	
#line 1033 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 334 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Var Declaration","",2,yyattribute(1 - 2).integer,yyattribute(2 - 2).integer);
		Node *node = tree->get_node(yyattribute(1 - 2).integer);
		tree->change_type(yyattribute(2 - 2).integer,node->type);
	
#line 1050 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 339 ".\\myparser.y"

		//int pointer = tree->create_tree("Pointer Declaration","",1,$3);
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Var Declaration","",2,yyattribute(1 - 2).integer,yyattribute(2 - 2).integer);
	
#line 1066 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 343 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Array Declaration", "", 2, yyattribute(1 - 2).integer, yyattribute(2 - 2).integer);
	
#line 1081 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 348 ".\\myparser.y"

		if(tree->get_node(yyattribute(1 - 1).integer)->child.at(0)->type=="error") {
			cout << "等号左边变量未声明!" << " Error: " << no <<endl;
		}
		
		tree->change_type(yyattribute(1 - 1).integer,"integer");
	
#line 1100 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 355 ".\\myparser.y"
tree->change_type(yyattribute(1 - 1).integer,"integer");
#line 1113 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 356 ".\\myparser.y"

		if(tree->get_node(yyattribute(2 - 2).integer)->child.at(1)->type=="error") {
			//cout << "等号右边变量未声明!" <<endl;
		}
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Var Declaration","",2,yyattribute(1 - 2).integer,yyattribute(2 - 2).integer);
		tree->change_type(yyattribute(2 - 2).integer,"integer");
		//cout << "*/-*/-/*-" << endl;
		//tree->print_tree();
	
#line 1134 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 365 ".\\myparser.y"

		tree->change_type(yyattribute(1 - 1).integer,"integer");
	
#line 1149 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 368 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer, 1, yyattribute(3 - 3).integer);
		tree->change_type(yyattribute(1 - 3).integer,"integer");
	
#line 1165 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 372 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer, 1, yyattribute(3 - 3).integer);
		tree->change_type(yyattribute(1 - 3).integer,"integer");
	
#line 1181 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 376 ".\\myparser.y"

		//int pointer = tree->create_tree("Pointer Declaration","",1,$4);
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer, 1, yyattribute(3 - 3).integer);
	
#line 1197 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 380 ".\\myparser.y"

		//int pointer = tree->create_tree("Pointer Declaration","",1,$4);
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->add_child(yyattribute(1 - 3).integer, 1, yyattribute(3 - 3).integer);
	
#line 1213 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 387 ".\\myparser.y"

		//int point = tree->create_tree("Pointer Declaration","",0);
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Pointer Declaration","",1, yyattribute(2 - 2).integer);
	
#line 1229 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 391 ".\\myparser.y"

		//int point = tree->create_tree("Pointer Declaration","",0);
		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Pointer Declaration","",1, yyattribute(2 - 2).integer);
	
#line 1245 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 398 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1261 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 402 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1277 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 406 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"float");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1293 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 410 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"double");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1309 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 414 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"bool");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1325 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 418 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"char");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1341 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 422 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"struct");
		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(1 - 1).integer;
	
#line 1357 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 429 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:--v",1,yyattribute(2 - 2).integer);
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		//tree->print_tree();
	
#line 1374 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 434 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:++v",1,yyattribute(2 - 2).integer);
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		//tree->print_tree();
	
#line 1391 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 439 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:v++",1,yyattribute(1 - 2).integer);
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		//tree->print_tree();
	
#line 1408 "myparser.cpp"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 444 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:v--",1,yyattribute(1 - 2).integer);
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
		//tree->print_tree();
	
#line 1425 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 449 ".\\myparser.y"

	// $$ = $2; debug_vsp(yyval, "(ess)", yyvsp, "101");
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"integer");
	
#line 1441 "myparser.cpp"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 455 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","",1,yyattribute(1 - 1).integer);tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer, "boolean");
#line 1454 "myparser.cpp"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 456 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:!",1,yyattribute(2 - 2).integer);
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer, "boolean");
	
#line 1470 "myparser.cpp"
			}
		}
		break;
	case 83:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 460 ".\\myparser.y"
tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer, "boolean");
#line 1483 "myparser.cpp"
			}
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 461 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:<",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no <<endl;
		}
		//tree->print_tree();
	
#line 1505 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 471 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:>",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		//cout << tree->get_node($1)->type << tree->get_node($3)->type << endl;
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1528 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 482 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:>=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1550 "myparser.cpp"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 492 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:<=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1572 "myparser.cpp"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 502 ".\\myparser.y"

	    (*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:!=",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
	    if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1594 "myparser.cpp"
			}
		}
		break;
	case 89:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 512 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:==",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1616 "myparser.cpp"
			}
		}
		break;
	case 90:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 522 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:&&",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "boolean" && tree->get_node(yyattribute(3 - 3).integer)->type == "boolean") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	
#line 1638 "myparser.cpp"
			}
		}
		break;
	case 91:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 532 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:||",2,yyattribute(1 - 3).integer,yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "boolean" && tree->get_node(yyattribute(3 - 3).integer)->type == "boolean") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1660 "myparser.cpp"
			}
		}
		break;
	case 92:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 542 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:&&",2,yyattribute(2 - 5).integer,yyattribute(4 - 5).integer);
		if(tree->get_node(yyattribute(2 - 5).integer)->type == "boolean" && tree->get_node(yyattribute(4 - 5).integer)->type == "boolean") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	
#line 1682 "myparser.cpp"
			}
		}
		break;
	case 93:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 552 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr","op:||",2,yyattribute(2 - 5).integer,yyattribute(4 - 5).integer);
		if(tree->get_node(yyattribute(2 - 5).integer)->type == "boolean" && tree->get_node(yyattribute(4 - 5).integer)->type == "boolean") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"boolean");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1704 "myparser.cpp"
			}
		}
		break;
	case 94:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 562 ".\\myparser.y"

	//  $$ = $2;                  debug_vsp(yyval, "(ec)", yyvsp, "101");
		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,tree->get_node(yyattribute(2 - 3).integer)->type);
	
#line 1720 "myparser.cpp"
			}
		}
		break;
	case 95:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 568 ".\\myparser.y"

		Node *node = tree->get_node(yyattribute(1 - 1).integer);
		if(judge_str(node->value)) {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		}
		else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	
#line 1742 "myparser.cpp"
			}
		}
		break;
	case 96:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 578 ".\\myparser.y"

		if(tree->get_node(yyattribute(1 - 1).integer)->type == "") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "等号右边变量未声明!" << " Error: " << no << endl;
		}
		else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		}
	
#line 1763 "myparser.cpp"
			}
		}
		break;
	case 97:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 589 ".\\myparser.y"

		tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
	
#line 1778 "myparser.cpp"
			}
		}
		break;
	case 98:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 592 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:&", 1, yyattribute(2 - 2).integer);
	
#line 1793 "myparser.cpp"
			}
		}
		break;
	case 99:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 595 ".\\myparser.y"

		//$$ = set_content(-$2);   debug_vsp(yyval, "-e", yyvsp, "13");
	
#line 1808 "myparser.cpp"
			}
		}
		break;
	case 100:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 598 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:+", 2, yyattribute(1 - 3).integer, yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1830 "myparser.cpp"
			}
		}
		break;
	case 101:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 608 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:-", 2, yyattribute(1 - 3).integer, yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
	//	tree->print_tree();
	
#line 1852 "myparser.cpp"
			}
		}
		break;
	case 102:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 618 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:*", 2, yyattribute(1 - 3).integer, yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1874 "myparser.cpp"
			}
		}
		break;
	case 103:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 628 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:/", 2, yyattribute(1 - 3).integer, yyattribute(3 - 3).integer);
		if(tree->get_node(yyattribute(1 - 3).integer)->type == "void" && tree->get_node(yyattribute(3 - 3).integer)->type == "void") {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"void");
		} else {
			tree->change_type((*(YYSTYPE YYFAR*)yyvalptr).integer,"error");
			cout << "操作数类型不兼容!" << " Error: " << no << endl;
		}
		//tree->print_tree();
	
#line 1896 "myparser.cpp"
			}
		}
		break;
	case 104:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 638 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = yyattribute(2 - 3).integer;
		//$$ = $2;                   debug_vsp(yyval, "(e)", yyvsp, "101");
	
#line 1912 "myparser.cpp"
			}
		}
		break;
	case 105:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 645 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "array", 2, yyattribute(1 - 2).integer, yyattribute(2 - 2).integer);
	
#line 1927 "myparser.cpp"
			}
		}
		break;
	case 106:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 651 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:[]", 2, yyattribute(2 - 4).integer, yyattribute(4 - 4).integer);
	
#line 1942 "myparser.cpp"
			}
		}
		break;
	case 107:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 654 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:[]", 1, yyattribute(2 - 3).integer);
	
#line 1957 "myparser.cpp"
			}
		}
		break;
	case 108:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 657 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).integer = tree->create_tree("Expr", "op:[](No number)", 0);
	
#line 1972 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "\'!\'", 33 },
		{ "\'&\'", 38 },
		{ "\'(\'", 40 },
		{ "\')\'", 41 },
		{ "\'*\'", 42 },
		{ "\'+\'", 43 },
		{ "\',\'", 44 },
		{ "\'-\'", 45 },
		{ "\'.\'", 46 },
		{ "\'/\'", 47 },
		{ "\';\'", 59 },
		{ "\'<\'", 60 },
		{ "\'=\'", 61 },
		{ "\'>\'", 62 },
		{ "\'[\'", 91 },
		{ "\']\'", 93 },
		{ "\'{\'", 123 },
		{ "\'}\'", 125 },
		{ "error", 256 },
		{ "IDENTIFIER", 257 },
		{ "NUMBER", 258 },
		{ "INC_OP", 259 },
		{ "DEC_OP", 260 },
		{ "LE_OP", 263 },
		{ "GE_OP", 264 },
		{ "EQ_OP", 265 },
		{ "NE_OP", 266 },
		{ "AND_OP", 267 },
		{ "OR_OP", 268 },
		{ "MUL_ASSIGN", 269 },
		{ "DIV_ASSIGN", 270 },
		{ "MOD_ASSIGN", 271 },
		{ "ADD_ASSIGN", 272 },
		{ "SUB_ASSIGN", 273 },
		{ "ARROW", 277 },
		{ "CHAR", 280 },
		{ "INT", 281 },
		{ "DOUBLE", 282 },
		{ "VOID", 283 },
		{ "BOOL", 284 },
		{ "STRUCT_ID", 285 },
		{ "IF", 287 },
		{ "ELSE", 288 },
		{ "WHILE", 290 },
		{ "DO", 291 },
		{ "FOR", 292 },
		{ "RETURN", 296 },
		{ "FLOAT", 299 },
		{ "MAIN", 300 },
		{ "SCANF", 301 },
		{ "STRUCT", 302 },
		{ "PRINT", 305 },
		{ "UMINUS", 306 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program:",
		"program: program function_defi",
		"program: function_defi",
		"program:",
		"function_defi: function_decl stmt",
		"function_defi: struct_node",
		"function_defi:",
		"struct_node: STRUCT IDENTIFIER stmt \';\'",
		"function_decl: type MAIN \'(\' \')\'",
		"function_decl: expr_decl \'(\' \')\'",
		"function_decl: expr_decl \'(\' parameter_list \')\'",
		"function_call: IDENTIFIER \'(\' \')\'",
		"function_call: IDENTIFIER \'(\' real_parameter \')\'",
		"real_parameter: real_parameter \',\' expr",
		"real_parameter: expr",
		"parameter_list: parameter_list \',\' expr_decl",
		"parameter_list: expr_decl",
		"stmt: \';\'",
		"stmt: expr \';\'",
		"stmt: expr_type \';\'",
		"stmt: PRINT \'(\' expr \')\' \';\'",
		"stmt: PRINT \'(\' expr_set \')\' \';\'",
		"stmt: SCANF \'(\' expr \')\' \';\'",
		"stmt: SCANF \'(\' expr_set \')\' \';\'",
		"stmt: FOR \'(\' expr_for_i \';\' expr_for_ii \';\' expr_for_iii \')\' stmt",
		"stmt: WHILE \'(\' expr_comp \')\' stmt",
		"stmt: DO stmt WHILE \'(\' expr_comp \')\'",
		"stmt: IF \'(\' expr_comp \')\' stmt",
		"stmt: IF \'(\' expr_comp \')\' stmt ELSE stmt",
		"stmt: RETURN stmt",
		"stmt: \'{\' stmt_list \'}\'",
		"stmt: \'{\' \'}\'",
		"stmt: function_call \';\'",
		"expr_for_i: expr_type",
		"expr_for_i:",
		"expr_for_ii: expr_comp",
		"expr_for_ii:",
		"expr_for_iii: expr_set",
		"expr_for_iii:",
		"stmt_list: stmt",
		"stmt_list: stmt_list stmt",
		"vari: IDENTIFIER",
		"vari: array_expr",
		"vari: struct_call",
		"expr_set: vari \'=\' expr",
		"expr_set: array_expr \'=\' \'{\' numbers \'}\'",
		"expr_set: array_expr \'=\' \'{\' \'}\'",
		"expr_set: array_expr \'=\' expr",
		"expr_set: vari \'=\' expr_setself",
		"expr_set: vari ADD_ASSIGN expr",
		"expr_set: vari SUB_ASSIGN expr",
		"expr_set: vari MUL_ASSIGN expr",
		"expr_set: vari DIV_ASSIGN expr",
		"expr_set: vari MOD_ASSIGN expr",
		"expr_set: vari ADD_ASSIGN expr_setself",
		"expr_set: vari SUB_ASSIGN expr_setself",
		"expr_set: vari MUL_ASSIGN expr_setself",
		"expr_set: vari DIV_ASSIGN expr_setself",
		"expr_set: vari MOD_ASSIGN expr_setself",
		"expr_set: vari \'=\' function_call",
		"expr_set: expr_setself",
		"numbers: numbers \',\' expr",
		"numbers: expr",
		"numbers: numbers \',\' \'{\' numbers \'}\'",
		"numbers: \'{\' numbers \'}\'",
		"struct_call: IDENTIFIER \'.\' IDENTIFIER",
		"struct_call: IDENTIFIER ARROW IDENTIFIER",
		"struct_call: pointer ARROW IDENTIFIER",
		"expr_decl: type IDENTIFIER",
		"expr_decl: type pointer",
		"expr_decl: type array_expr",
		"expr_type: expr_set",
		"expr_type: IDENTIFIER",
		"expr_type: type expr_set",
		"expr_type: expr_decl",
		"expr_type: expr_type \',\' expr_set",
		"expr_type: expr_type \',\' IDENTIFIER",
		"expr_type: expr_type \',\' pointer",
		"expr_type: expr_type \',\' array_expr",
		"pointer: \'*\' IDENTIFIER",
		"pointer: \'*\' pointer",
		"type: INT",
		"type: VOID",
		"type: FLOAT",
		"type: DOUBLE",
		"type: BOOL",
		"type: CHAR",
		"type: STRUCT_ID",
		"expr_setself: DEC_OP vari",
		"expr_setself: INC_OP vari",
		"expr_setself: vari INC_OP",
		"expr_setself: vari DEC_OP",
		"expr_setself: \'(\' expr_setself \')\'",
		"expr_comp: expr",
		"expr_comp: \'!\' expr",
		"expr_comp: expr_set",
		"expr_comp: expr \'<\' expr",
		"expr_comp: expr \'>\' expr",
		"expr_comp: expr GE_OP expr",
		"expr_comp: expr LE_OP expr",
		"expr_comp: expr NE_OP expr",
		"expr_comp: expr EQ_OP expr",
		"expr_comp: expr_comp AND_OP expr_comp",
		"expr_comp: expr_comp OR_OP expr_comp",
		"expr_comp: \'(\' expr_comp AND_OP expr_comp \')\'",
		"expr_comp: \'(\' expr_comp OR_OP expr_comp \')\'",
		"expr_comp: \'(\' expr_comp \')\'",
		"expr: NUMBER",
		"expr: IDENTIFIER",
		"expr: pointer",
		"expr: struct_call",
		"expr: array_expr",
		"expr: \'&\' IDENTIFIER",
		"expr: \'-\' NUMBER",
		"expr: expr \'+\' expr",
		"expr: expr \'-\' expr",
		"expr: expr \'*\' expr",
		"expr: expr \'/\' expr",
		"expr: \'(\' expr \')\'",
		"array_expr: IDENTIFIER array_list",
		"array_list: \'[\' NUMBER \']\' array_list",
		"array_list: \'[\' NUMBER \']\'",
		"array_list: \'[\' \']\'"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 0, -1 },
		{ 1, 2, 0 },
		{ 1, 1, 1 },
		{ 1, 0, -1 },
		{ 2, 2, 2 },
		{ 2, 1, -1 },
		{ 2, 0, -1 },
		{ 3, 4, 3 },
		{ 4, 4, 4 },
		{ 4, 3, 5 },
		{ 4, 4, 6 },
		{ 5, 3, 7 },
		{ 5, 4, 8 },
		{ 6, 3, 9 },
		{ 6, 1, 10 },
		{ 7, 3, 11 },
		{ 7, 1, 12 },
		{ 8, 1, 13 },
		{ 8, 2, -1 },
		{ 8, 2, -1 },
		{ 8, 5, 14 },
		{ 8, 5, 15 },
		{ 8, 5, 16 },
		{ 8, 5, 17 },
		{ 8, 9, 18 },
		{ 8, 5, 19 },
		{ 8, 6, 20 },
		{ 8, 5, 21 },
		{ 8, 7, 22 },
		{ 8, 2, 23 },
		{ 8, 3, 24 },
		{ 8, 2, 25 },
		{ 8, 2, -1 },
		{ 9, 1, -1 },
		{ 9, 0, 26 },
		{ 10, 1, 27 },
		{ 10, 0, 28 },
		{ 11, 1, -1 },
		{ 11, 0, 29 },
		{ 12, 1, 30 },
		{ 12, 2, 31 },
		{ 13, 1, 32 },
		{ 13, 1, -1 },
		{ 13, 1, -1 },
		{ 14, 3, 33 },
		{ 14, 5, 34 },
		{ 14, 4, 35 },
		{ 14, 3, 36 },
		{ 14, 3, 37 },
		{ 14, 3, 38 },
		{ 14, 3, 39 },
		{ 14, 3, 40 },
		{ 14, 3, 41 },
		{ 14, 3, 42 },
		{ 14, 3, 43 },
		{ 14, 3, 44 },
		{ 14, 3, 45 },
		{ 14, 3, 46 },
		{ 14, 3, 47 },
		{ 14, 3, 48 },
		{ 14, 1, -1 },
		{ 15, 3, 49 },
		{ 15, 1, 50 },
		{ 15, 5, 51 },
		{ 15, 3, 52 },
		{ 16, 3, 53 },
		{ 16, 3, 54 },
		{ 16, 3, 55 },
		{ 17, 2, 56 },
		{ 17, 2, 57 },
		{ 17, 2, 58 },
		{ 18, 1, 59 },
		{ 18, 1, 60 },
		{ 18, 2, 61 },
		{ 18, 1, 62 },
		{ 18, 3, 63 },
		{ 18, 3, 64 },
		{ 18, 3, 65 },
		{ 18, 3, 66 },
		{ 19, 2, 67 },
		{ 19, 2, 68 },
		{ 20, 1, 69 },
		{ 20, 1, 70 },
		{ 20, 1, 71 },
		{ 20, 1, 72 },
		{ 20, 1, 73 },
		{ 20, 1, 74 },
		{ 20, 1, 75 },
		{ 21, 2, 76 },
		{ 21, 2, 77 },
		{ 21, 2, 78 },
		{ 21, 2, 79 },
		{ 21, 3, 80 },
		{ 22, 1, 81 },
		{ 22, 2, 82 },
		{ 22, 1, 83 },
		{ 22, 3, 84 },
		{ 22, 3, 85 },
		{ 22, 3, 86 },
		{ 22, 3, 87 },
		{ 22, 3, 88 },
		{ 22, 3, 89 },
		{ 22, 3, 90 },
		{ 22, 3, 91 },
		{ 22, 5, 92 },
		{ 22, 5, 93 },
		{ 22, 3, 94 },
		{ 23, 1, 95 },
		{ 23, 1, 96 },
		{ 23, 1, -1 },
		{ 23, 1, -1 },
		{ 23, 1, 97 },
		{ 23, 2, 98 },
		{ 23, 2, 99 },
		{ 23, 3, 100 },
		{ 23, 3, 101 },
		{ 23, 3, 102 },
		{ 23, 3, 103 },
		{ 23, 3, 104 },
		{ 24, 2, 105 },
		{ 25, 4, 106 },
		{ 25, 3, 107 },
		{ 25, 2, 108 }
	};
	yyreduction = reduction;

	yytokenaction_size = 347;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 236, YYAT_SHIFT, 23 },
		{ 11, YYAT_ACCEPT, 0 },
		{ 236, YYAT_SHIFT, 24 },
		{ 62, YYAT_SHIFT, 72 },
		{ 236, YYAT_SHIFT, 18 },
		{ 212, YYAT_SHIFT, 225 },
		{ 28, YYAT_SHIFT, 71 },
		{ 236, YYAT_SHIFT, 25 },
		{ 28, YYAT_REDUCE, 109 },
		{ 28, YYAT_REDUCE, 109 },
		{ 28, YYAT_REDUCE, 73 },
		{ 28, YYAT_REDUCE, 109 },
		{ 28, YYAT_SHIFT, 72 },
		{ 28, YYAT_REDUCE, 109 },
		{ 132, YYAT_SHIFT, 88 },
		{ 132, YYAT_SHIFT, 89 },
		{ 58, YYAT_SHIFT, 113 },
		{ 132, YYAT_SHIFT, 90 },
		{ 62, YYAT_REDUCE, 42 },
		{ 132, YYAT_SHIFT, 91 },
		{ 155, YYAT_SHIFT, 71 },
		{ 236, YYAT_SHIFT, 26 },
		{ 228, YYAT_SHIFT, 23 },
		{ 235, YYAT_SHIFT, 220 },
		{ 228, YYAT_SHIFT, 120 },
		{ 28, YYAT_REDUCE, 73 },
		{ 155, YYAT_SHIFT, 72 },
		{ 42, YYAT_ERROR, 0 },
		{ 83, YYAT_SHIFT, 93 },
		{ 228, YYAT_SHIFT, 25 },
		{ 83, YYAT_SHIFT, 18 },
		{ 148, YYAT_REDUCE, 77 },
		{ 132, YYAT_SHIFT, 180 },
		{ 148, YYAT_SHIFT, 72 },
		{ 132, YYAT_SHIFT, 181 },
		{ 122, YYAT_SHIFT, 72 },
		{ 54, YYAT_SHIFT, 18 },
		{ 175, YYAT_SHIFT, 116 },
		{ 175, YYAT_SHIFT, 88 },
		{ 175, YYAT_SHIFT, 89 },
		{ 45, YYAT_SHIFT, 98 },
		{ 175, YYAT_SHIFT, 90 },
		{ 146, YYAT_SHIFT, 88 },
		{ 175, YYAT_SHIFT, 91 },
		{ 74, YYAT_SHIFT, 72 },
		{ 42, YYAT_SHIFT, 92 },
		{ 148, YYAT_REDUCE, 77 },
		{ 146, YYAT_SHIFT, 91 },
		{ 62, YYAT_SHIFT, 58 },
		{ 136, YYAT_REDUCE, 73 },
		{ 94, YYAT_REDUCE, 69 },
		{ 136, YYAT_SHIFT, 72 },
		{ 94, YYAT_SHIFT, 72 },
		{ 151, YYAT_REDUCE, 79 },
		{ 188, YYAT_SHIFT, 129 },
		{ 45, YYAT_SHIFT, 99 },
		{ 175, YYAT_SHIFT, 180 },
		{ 28, YYAT_SHIFT, 58 },
		{ 175, YYAT_SHIFT, 181 },
		{ 188, YYAT_SHIFT, 23 },
		{ 234, YYAT_SHIFT, 236 },
		{ 188, YYAT_SHIFT, 130 },
		{ 201, YYAT_SHIFT, 129 },
		{ 188, YYAT_SHIFT, 18 },
		{ 136, YYAT_REDUCE, 73 },
		{ 94, YYAT_REDUCE, 69 },
		{ 188, YYAT_SHIFT, 25 },
		{ 97, YYAT_REDUCE, 71 },
		{ 151, YYAT_REDUCE, 79 },
		{ 201, YYAT_SHIFT, 130 },
		{ 151, YYAT_SHIFT, 101 },
		{ 155, YYAT_SHIFT, 58 },
		{ 145, YYAT_SHIFT, 88 },
		{ 226, YYAT_SHIFT, 93 },
		{ 109, YYAT_ERROR, 0 },
		{ 226, YYAT_SHIFT, 18 },
		{ 223, YYAT_SHIFT, 231 },
		{ 145, YYAT_SHIFT, 91 },
		{ 148, YYAT_SHIFT, 58 },
		{ 174, YYAT_SHIFT, 199 },
		{ 122, YYAT_SHIFT, 58 },
		{ 109, YYAT_SHIFT, 24 },
		{ 97, YYAT_REDUCE, 71 },
		{ 222, YYAT_SHIFT, 230 },
		{ 97, YYAT_SHIFT, 101 },
		{ 236, YYAT_SHIFT, 27 },
		{ 49, YYAT_SHIFT, 101 },
		{ 213, YYAT_SHIFT, 178 },
		{ 213, YYAT_SHIFT, 179 },
		{ 74, YYAT_SHIFT, 58 },
		{ 0, YYAT_SHIFT, 1 },
		{ 0, YYAT_SHIFT, 2 },
		{ 0, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 4 },
		{ 0, YYAT_SHIFT, 5 },
		{ 0, YYAT_SHIFT, 6 },
		{ 136, YYAT_SHIFT, 58 },
		{ 94, YYAT_SHIFT, 58 },
		{ 66, YYAT_SHIFT, 103 },
		{ 66, YYAT_SHIFT, 104 },
		{ 125, YYAT_SHIFT, 171 },
		{ 47, YYAT_REDUCE, 44 },
		{ 98, YYAT_SHIFT, 93 },
		{ 125, YYAT_SHIFT, 172 },
		{ 235, YYAT_SHIFT, 237 },
		{ 55, YYAT_SHIFT, 111 },
		{ 50, YYAT_SHIFT, 102 },
		{ 228, YYAT_SHIFT, 193 },
		{ 55, YYAT_SHIFT, 112 },
		{ 0, YYAT_SHIFT, 7 },
		{ 65, YYAT_REDUCE, 43 },
		{ 65, YYAT_REDUCE, 43 },
		{ 0, YYAT_SHIFT, 8 },
		{ 112, YYAT_SHIFT, 1 },
		{ 112, YYAT_SHIFT, 2 },
		{ 112, YYAT_SHIFT, 3 },
		{ 112, YYAT_SHIFT, 4 },
		{ 112, YYAT_SHIFT, 5 },
		{ 112, YYAT_SHIFT, 6 },
		{ 142, YYAT_SHIFT, 191 },
		{ 142, YYAT_SHIFT, 88 },
		{ 142, YYAT_SHIFT, 89 },
		{ 220, YYAT_SHIFT, 228 },
		{ 142, YYAT_SHIFT, 90 },
		{ 219, YYAT_SHIFT, 227 },
		{ 142, YYAT_SHIFT, 91 },
		{ 229, YYAT_SHIFT, 88 },
		{ 229, YYAT_SHIFT, 89 },
		{ 214, YYAT_SHIFT, 226 },
		{ 229, YYAT_SHIFT, 90 },
		{ 204, YYAT_SHIFT, 178 },
		{ 229, YYAT_SHIFT, 91 },
		{ 112, YYAT_SHIFT, 7 },
		{ 210, YYAT_SHIFT, 88 },
		{ 210, YYAT_SHIFT, 89 },
		{ 202, YYAT_SHIFT, 224 },
		{ 210, YYAT_SHIFT, 90 },
		{ 195, YYAT_SHIFT, 221 },
		{ 210, YYAT_SHIFT, 91 },
		{ 209, YYAT_SHIFT, 88 },
		{ 209, YYAT_SHIFT, 89 },
		{ 192, YYAT_SHIFT, 218 },
		{ 209, YYAT_SHIFT, 90 },
		{ 191, YYAT_SHIFT, 217 },
		{ 209, YYAT_SHIFT, 91 },
		{ 208, YYAT_SHIFT, 88 },
		{ 208, YYAT_SHIFT, 89 },
		{ 190, YYAT_SHIFT, 216 },
		{ 208, YYAT_SHIFT, 90 },
		{ 189, YYAT_SHIFT, 215 },
		{ 208, YYAT_SHIFT, 91 },
		{ 207, YYAT_SHIFT, 88 },
		{ 207, YYAT_SHIFT, 89 },
		{ 185, YYAT_ERROR, 0 },
		{ 207, YYAT_SHIFT, 90 },
		{ 176, YYAT_SHIFT, 117 },
		{ 207, YYAT_SHIFT, 91 },
		{ 206, YYAT_SHIFT, 88 },
		{ 206, YYAT_SHIFT, 89 },
		{ 170, YYAT_SHIFT, 58 },
		{ 206, YYAT_SHIFT, 90 },
		{ 153, YYAT_SHIFT, 194 },
		{ 206, YYAT_SHIFT, 91 },
		{ 205, YYAT_SHIFT, 88 },
		{ 205, YYAT_SHIFT, 89 },
		{ 150, YYAT_SHIFT, 100 },
		{ 205, YYAT_SHIFT, 90 },
		{ 143, YYAT_SHIFT, 192 },
		{ 205, YYAT_SHIFT, 91 },
		{ 198, YYAT_SHIFT, 88 },
		{ 198, YYAT_SHIFT, 89 },
		{ 141, YYAT_SHIFT, 190 },
		{ 198, YYAT_SHIFT, 90 },
		{ 140, YYAT_SHIFT, 189 },
		{ 198, YYAT_SHIFT, 91 },
		{ 196, YYAT_SHIFT, 88 },
		{ 196, YYAT_SHIFT, 89 },
		{ 139, YYAT_SHIFT, 188 },
		{ 196, YYAT_SHIFT, 90 },
		{ 138, YYAT_SHIFT, 101 },
		{ 196, YYAT_SHIFT, 91 },
		{ 58, YYAT_SHIFT, 114 },
		{ 173, YYAT_SHIFT, 88 },
		{ 173, YYAT_SHIFT, 89 },
		{ 137, YYAT_SHIFT, 98 },
		{ 173, YYAT_SHIFT, 90 },
		{ 135, YYAT_SHIFT, 187 },
		{ 173, YYAT_SHIFT, 91 },
		{ 167, YYAT_SHIFT, 88 },
		{ 167, YYAT_SHIFT, 89 },
		{ 134, YYAT_SHIFT, 186 },
		{ 167, YYAT_SHIFT, 90 },
		{ 131, YYAT_SHIFT, 177 },
		{ 167, YYAT_SHIFT, 91 },
		{ 165, YYAT_SHIFT, 88 },
		{ 165, YYAT_SHIFT, 89 },
		{ 114, YYAT_SHIFT, 170 },
		{ 165, YYAT_SHIFT, 90 },
		{ 102, YYAT_SHIFT, 155 },
		{ 165, YYAT_SHIFT, 91 },
		{ 163, YYAT_SHIFT, 88 },
		{ 163, YYAT_SHIFT, 89 },
		{ 101, YYAT_SHIFT, 153 },
		{ 163, YYAT_SHIFT, 90 },
		{ 100, YYAT_SHIFT, 152 },
		{ 163, YYAT_SHIFT, 91 },
		{ 161, YYAT_SHIFT, 88 },
		{ 161, YYAT_SHIFT, 89 },
		{ 96, YYAT_SHIFT, 100 },
		{ 161, YYAT_SHIFT, 90 },
		{ 93, YYAT_SHIFT, 74 },
		{ 161, YYAT_SHIFT, 91 },
		{ 82, YYAT_SHIFT, 135 },
		{ 76, YYAT_SHIFT, 100 },
		{ 73, YYAT_SHIFT, 128 },
		{ 72, YYAT_SHIFT, 127 },
		{ 62, YYAT_REDUCE, 42 },
		{ 62, YYAT_REDUCE, 42 },
		{ 71, YYAT_SHIFT, 121 },
		{ 236, YYAT_SHIFT, 28 },
		{ 236, YYAT_SHIFT, 29 },
		{ 236, YYAT_SHIFT, 30 },
		{ 236, YYAT_SHIFT, 31 },
		{ 70, YYAT_SHIFT, 118 },
		{ 64, YYAT_SHIFT, 117 },
		{ 63, YYAT_SHIFT, 116 },
		{ 62, YYAT_REDUCE, 42 },
		{ 62, YYAT_REDUCE, 42 },
		{ 62, YYAT_REDUCE, 42 },
		{ 62, YYAT_REDUCE, 42 },
		{ 62, YYAT_REDUCE, 42 },
		{ 212, YYAT_SHIFT, 178 },
		{ 212, YYAT_SHIFT, 179 },
		{ 60, YYAT_SHIFT, 115 },
		{ 62, YYAT_SHIFT, 73 },
		{ 132, YYAT_SHIFT, 182 },
		{ 132, YYAT_SHIFT, 183 },
		{ 132, YYAT_SHIFT, 184 },
		{ 132, YYAT_SHIFT, 185 },
		{ 155, YYAT_REDUCE, 42 },
		{ 155, YYAT_REDUCE, 42 },
		{ 228, YYAT_SHIFT, 122 },
		{ 228, YYAT_SHIFT, 29 },
		{ 28, YYAT_SHIFT, 73 },
		{ 51, YYAT_SHIFT, 110 },
		{ 83, YYAT_SHIFT, 136 },
		{ 48, YYAT_SHIFT, 100 },
		{ 83, YYAT_SHIFT, 30 },
		{ 83, YYAT_SHIFT, 31 },
		{ 236, YYAT_SHIFT, 32 },
		{ 44, YYAT_SHIFT, 94 },
		{ 54, YYAT_SHIFT, 19 },
		{ 236, YYAT_SHIFT, 33 },
		{ 236, YYAT_SHIFT, 34 },
		{ 236, YYAT_SHIFT, 35 },
		{ 39, YYAT_SHIFT, 87 },
		{ 38, YYAT_SHIFT, 86 },
		{ 155, YYAT_SHIFT, 73 },
		{ 236, YYAT_SHIFT, 36 },
		{ 175, YYAT_SHIFT, 182 },
		{ 175, YYAT_SHIFT, 183 },
		{ 175, YYAT_SHIFT, 184 },
		{ 175, YYAT_SHIFT, 185 },
		{ 236, YYAT_SHIFT, 37 },
		{ 148, YYAT_SHIFT, 73 },
		{ 37, YYAT_SHIFT, 85 },
		{ 122, YYAT_SHIFT, 73 },
		{ 236, YYAT_SHIFT, 38 },
		{ 83, YYAT_SHIFT, 1 },
		{ 83, YYAT_SHIFT, 2 },
		{ 83, YYAT_SHIFT, 3 },
		{ 83, YYAT_SHIFT, 4 },
		{ 83, YYAT_SHIFT, 5 },
		{ 83, YYAT_SHIFT, 6 },
		{ 35, YYAT_SHIFT, 83 },
		{ 74, YYAT_SHIFT, 73 },
		{ 33, YYAT_SHIFT, 81 },
		{ 32, YYAT_SHIFT, 80 },
		{ 188, YYAT_SHIFT, 62 },
		{ 188, YYAT_SHIFT, 29 },
		{ 188, YYAT_SHIFT, 30 },
		{ 188, YYAT_SHIFT, 31 },
		{ 136, YYAT_SHIFT, 73 },
		{ 94, YYAT_SHIFT, 73 },
		{ 49, YYAT_REDUCE, 43 },
		{ 49, YYAT_REDUCE, 43 },
		{ 201, YYAT_SHIFT, 62 },
		{ 83, YYAT_SHIFT, 7 },
		{ 201, YYAT_SHIFT, 30 },
		{ 201, YYAT_SHIFT, 31 },
		{ 226, YYAT_SHIFT, 74 },
		{ 31, YYAT_SHIFT, 74 },
		{ 226, YYAT_SHIFT, 30 },
		{ 226, YYAT_SHIFT, 31 },
		{ 49, YYAT_REDUCE, 43 },
		{ 49, YYAT_REDUCE, 43 },
		{ 49, YYAT_REDUCE, 43 },
		{ 49, YYAT_REDUCE, 43 },
		{ 49, YYAT_REDUCE, 43 },
		{ 47, YYAT_REDUCE, 44 },
		{ 47, YYAT_REDUCE, 44 },
		{ 27, YYAT_SHIFT, 68 },
		{ 223, YYAT_SHIFT, 178 },
		{ 11, YYAT_SHIFT, 8 },
		{ 25, YYAT_SHIFT, 67 },
		{ 174, YYAT_SHIFT, 200 },
		{ 174, YYAT_SHIFT, 201 },
		{ 23, YYAT_SHIFT, 61 },
		{ 20, YYAT_SHIFT, 60 },
		{ 47, YYAT_REDUCE, 44 },
		{ 47, YYAT_REDUCE, 44 },
		{ 47, YYAT_REDUCE, 44 },
		{ 47, YYAT_REDUCE, 44 },
		{ 47, YYAT_REDUCE, 44 },
		{ 50, YYAT_SHIFT, 105 },
		{ 50, YYAT_SHIFT, 106 },
		{ 50, YYAT_SHIFT, 107 },
		{ 50, YYAT_SHIFT, 108 },
		{ 50, YYAT_SHIFT, 109 },
		{ 98, YYAT_SHIFT, 148 },
		{ 19, YYAT_SHIFT, 58 },
		{ 98, YYAT_SHIFT, 30 },
		{ 98, YYAT_SHIFT, 31 },
		{ 159, YYAT_SHIFT, 88 },
		{ 159, YYAT_SHIFT, 89 },
		{ 18, YYAT_SHIFT, 56 },
		{ 159, YYAT_SHIFT, 90 },
		{ 16, YYAT_SHIFT, 52 },
		{ 159, YYAT_SHIFT, 91 },
		{ 157, YYAT_SHIFT, 88 },
		{ 157, YYAT_SHIFT, 89 },
		{ 12, YYAT_SHIFT, 20 },
		{ 157, YYAT_SHIFT, 90 },
		{ 10, YYAT_SHIFT, 16 },
		{ 157, YYAT_SHIFT, 91 },
		{ 154, YYAT_SHIFT, 88 },
		{ 154, YYAT_SHIFT, 89 },
		{ 8, YYAT_SHIFT, 15 },
		{ 154, YYAT_SHIFT, 90 },
		{ -1, YYAT_ERROR, 0 },
		{ 154, YYAT_SHIFT, 91 },
		{ 123, YYAT_SHIFT, 88 },
		{ 123, YYAT_SHIFT, 89 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 90 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 91 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -190, 1, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_REDUCE, 83 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ 0, 0, YYAT_REDUCE, 84 },
		{ 80, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 293, 1, YYAT_ERROR, 0 },
		{ 1, 1, YYAT_DEFAULT, 112 },
		{ 31, 1, YYAT_DEFAULT, 54 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 286, 1, YYAT_DEFAULT, 112 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 68, 1, YYAT_DEFAULT, 54 },
		{ 229, 1, YYAT_REDUCE, 69 },
		{ 268, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 46, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 176, 1, YYAT_DEFAULT, 236 },
		{ -34, 1, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 108 },
		{ 0, 0, YYAT_DEFAULT, 31 },
		{ 34, 1, YYAT_DEFAULT, 54 },
		{ 237, 1, YYAT_ERROR, 0 },
		{ 236, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 234, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 225, 1, YYAT_ERROR, 0 },
		{ 216, 1, YYAT_ERROR, 0 },
		{ 196, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ -14, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ -7, 1, YYAT_DEFAULT, 98 },
		{ -4, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 40, 1, YYAT_REDUCE, 111 },
		{ -31, 1, YYAT_REDUCE, 110 },
		{ 25, 1, YYAT_REDUCE, 112 },
		{ 45, 1, YYAT_DEFAULT, 66 },
		{ 185, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ -6, 1, YYAT_ERROR, 0 },
		{ 64, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ -77, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 120 },
		{ 192, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 113 },
		{ -43, 1, YYAT_REDUCE, 109 },
		{ 184, 1, YYAT_DEFAULT, 142 },
		{ 183, 1, YYAT_ERROR, 0 },
		{ -149, 1, YYAT_REDUCE, 112 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 98, 1, YYAT_DEFAULT, 236 },
		{ 177, 1, YYAT_DEFAULT, 185 },
		{ -42, 1, YYAT_ERROR, 0 },
		{ -43, 1, YYAT_ERROR, 0 },
		{ -2, 1, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -64, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ -78, 1, YYAT_ERROR, 0 },
		{ -12, 1, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ -47, 1, YYAT_DEFAULT, 98 },
		{ 6, 1, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ -69, 1, YYAT_REDUCE, 70 },
		{ 23, 1, YYAT_REDUCE, 43 },
		{ 62, 1, YYAT_DEFAULT, 54 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -53, 1, YYAT_ERROR, 0 },
		{ 79, 1, YYAT_DEFAULT, 228 },
		{ -59, 1, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_REDUCE, 91 },
		{ 0, 0, YYAT_REDUCE, 92 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 41, 1, YYAT_DEFAULT, 201 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 123 },
		{ 103, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 119 },
		{ 0, 0, YYAT_REDUCE, 93 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -11, 1, YYAT_REDUCE, 109 },
		{ 299, 1, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 111 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 112 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 151, 1, YYAT_DEFAULT, 212 },
		{ -28, 1, YYAT_REDUCE, 94 },
		{ 0, 0, YYAT_REDUCE, 96 },
		{ 149, 1, YYAT_DEFAULT, 212 },
		{ 146, 1, YYAT_ERROR, 0 },
		{ 5, 1, YYAT_REDUCE, 42 },
		{ 140, 1, YYAT_REDUCE, 34 },
		{ 118, 1, YYAT_REDUCE, 43 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ 132, 1, YYAT_DEFAULT, 142 },
		{ 130, 1, YYAT_ERROR, 0 },
		{ 78, 1, YYAT_ERROR, 0 },
		{ 126, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 117 },
		{ 30, 1, YYAT_REDUCE, 115 },
		{ 0, 1, YYAT_REDUCE, 116 },
		{ 0, 0, YYAT_REDUCE, 118 },
		{ -13, 1, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ -112, 1, YYAT_REDUCE, 78 },
		{ 9, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 36, 1, YYAT_DEFAULT, 228 },
		{ 293, 1, YYAT_REDUCE, 48 },
		{ -20, 1, YYAT_REDUCE, 109 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 287, 1, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 281, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 164, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 158, 1, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 152, 1, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 146, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 68, 1, YYAT_REDUCE, 122 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 140, 1, YYAT_REDUCE, 95 },
		{ 38, 1, YYAT_ERROR, 0 },
		{ -4, 1, YYAT_REDUCE, 94 },
		{ 114, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 30, 1, YYAT_DEFAULT, 228 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 21, 1, YYAT_REDUCE, 37 },
		{ 90, 1, YYAT_ERROR, 0 },
		{ 88, 1, YYAT_ERROR, 0 },
		{ 84, 1, YYAT_ERROR, 0 },
		{ 82, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 228 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 12, 1, YYAT_DEFAULT, 235 },
		{ 133, 1, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 121 },
		{ 127, 1, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 0, 0, YYAT_DEFAULT, 201 },
		{ 29, 1, YYAT_DEFAULT, 185 },
		{ -153, 1, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 103 },
		{ -137, 1, YYAT_REDUCE, 104 },
		{ 121, 1, YYAT_REDUCE, 97 },
		{ 115, 1, YYAT_REDUCE, 98 },
		{ 109, 1, YYAT_REDUCE, 100 },
		{ 103, 1, YYAT_REDUCE, 99 },
		{ 97, 1, YYAT_REDUCE, 102 },
		{ 91, 1, YYAT_REDUCE, 101 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ -36, 1, YYAT_ERROR, 0 },
		{ -180, 1, YYAT_REDUCE, 36 },
		{ 69, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -1, 1, YYAT_DEFAULT, 235 },
		{ -1, 1, YYAT_DEFAULT, 228 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 42, 1, YYAT_REDUCE, 103 },
		{ 35, 1, YYAT_REDUCE, 104 },
		{ 0, 0, YYAT_DEFAULT, 236 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 33, 1, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ -16, 1, YYAT_DEFAULT, 54 },
		{ 84, 1, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 19, 1, YYAT_ERROR, 0 },
		{ -21, 1, YYAT_ERROR, 0 },
		{ -38, 1, YYAT_DEFAULT, 112 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 25 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 123;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 236, 39 },
		{ 224, 232 },
		{ 86, 143 },
		{ 236, 238 },
		{ 11, 17 },
		{ 11, 14 },
		{ 11, 13 },
		{ 200, 222 },
		{ 188, 214 },
		{ 236, 43 },
		{ 86, -1 },
		{ 86, 142 },
		{ 236, 41 },
		{ 236, 45 },
		{ 71, 125 },
		{ 236, 44 },
		{ 201, 50 },
		{ 201, 133 },
		{ 236, 42 },
		{ 11, 10 },
		{ 188, 213 },
		{ 220, -1 },
		{ 11, 12 },
		{ 193, 219 },
		{ 201, 46 },
		{ 201, 223 },
		{ 201, 132 },
		{ 201, 49 },
		{ 83, 139 },
		{ 220, 229 },
		{ 83, -1 },
		{ 71, 123 },
		{ 226, 234 },
		{ 83, 43 },
		{ 226, 50 },
		{ 226, 233 },
		{ 83, 41 },
		{ 83, 137 },
		{ 109, 66 },
		{ 83, 44 },
		{ 102, 156 },
		{ 109, 47 },
		{ 226, 46 },
		{ 228, 235 },
		{ 228, 124 },
		{ 226, 138 },
		{ 109, 168 },
		{ 228, 48 },
		{ 109, 167 },
		{ 109, 65 },
		{ 44, 95 },
		{ 228, 196 },
		{ 228, 126 },
		{ 16, 55 },
		{ 98, -1 },
		{ 44, 96 },
		{ 102, 158 },
		{ 98, 149 },
		{ 102, 157 },
		{ 187, 212 },
		{ 44, 97 },
		{ 93, 75 },
		{ 98, 150 },
		{ 16, 53 },
		{ 93, 76 },
		{ 85, 141 },
		{ 54, 21 },
		{ 98, 151 },
		{ 93, -1 },
		{ 93, 77 },
		{ 31, 79 },
		{ 54, 22 },
		{ 0, 11 },
		{ 0, 9 },
		{ 85, 140 },
		{ 130, 176 },
		{ 130, 174 },
		{ 130, 175 },
		{ 31, -1 },
		{ 27, 69 },
		{ 108, 166 },
		{ 112, 169 },
		{ 108, 165 },
		{ 27, 70 },
		{ 112, 54 },
		{ 107, 164 },
		{ 106, 162 },
		{ 107, 163 },
		{ 106, 161 },
		{ 105, 160 },
		{ 24, 64 },
		{ 105, 159 },
		{ 24, 63 },
		{ 186, 211 },
		{ 185, 210 },
		{ 184, 209 },
		{ 183, 208 },
		{ 182, 207 },
		{ 181, 206 },
		{ 180, 205 },
		{ 179, 204 },
		{ 178, 203 },
		{ 177, 202 },
		{ 172, 198 },
		{ 170, 197 },
		{ 155, 59 },
		{ 153, 195 },
		{ 129, 173 },
		{ 120, 63 },
		{ 101, 154 },
		{ 91, 147 },
		{ 90, 146 },
		{ 89, 145 },
		{ 88, 144 },
		{ 81, 134 },
		{ 80, 131 },
		{ 70, 119 },
		{ 36, 84 },
		{ 34, 82 },
		{ 30, 78 },
		{ 18, 57 },
		{ 15, 51 },
		{ 13, 40 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 71, 11 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 2, -1 },
		{ 0, 54 },
		{ 114, 236 },
		{ 0, -1 },
		{ 113, 236 },
		{ 46, 112 },
		{ 0, -1 },
		{ 101, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 69, 109 },
		{ 0, -1 },
		{ 0, -1 },
		{ 71, 236 },
		{ 0, 155 },
		{ 0, -1 },
		{ 106, 31 },
		{ 57, 93 },
		{ 0, -1 },
		{ 0, -1 },
		{ 110, 236 },
		{ 0, -1 },
		{ 109, 236 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 98 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 47, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 108, 236 },
		{ 8, 220 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 93, 201 },
		{ 92, 201 },
		{ 0, -1 },
		{ 19, 226 },
		{ 0, -1 },
		{ 51, 86 },
		{ -12, 201 },
		{ 0, -1 },
		{ 90, 220 },
		{ 89, 220 },
		{ 88, 220 },
		{ 87, 220 },
		{ 0, -1 },
		{ 45, 24 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 43, 226 },
		{ 0, -1 },
		{ 0, -1 },
		{ 86, 220 },
		{ 35, 109 },
		{ 0, -1 },
		{ 0, -1 },
		{ 68, 109 },
		{ 65, 109 },
		{ 64, 109 },
		{ 59, 109 },
		{ 25, 220 },
		{ 0, -1 },
		{ 0, -1 },
		{ 64, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 85, 220 },
		{ 0, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 84, 220 },
		{ 54, 201 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 155 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 91, 228 },
		{ 0, -1 },
		{ 80, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 79, -1 },
		{ 0, -1 },
		{ 80, 220 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 94, 236 },
		{ 79, 201 },
		{ 78, 201 },
		{ 76, 220 },
		{ 75, 220 },
		{ 74, 220 },
		{ 73, 220 },
		{ 72, 220 },
		{ 71, 220 },
		{ 85, 236 },
		{ 37, 201 },
		{ -2, 201 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 8, 228 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -15, 201 },
		{ 3, 109 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 6, 228 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -7, 236 },
		{ 0, -1 },
		{ 21, 93 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -5, 86 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 661 ".\\myparser.y"



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
