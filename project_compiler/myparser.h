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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 01/02/19
* Time: 17:24:14
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

#ifndef YYSTYPE
union tagYYSTYPE {
#line 23 ".\\myparser.y"

	int integer;

#line 39 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 29 ".\\myparser.y"

	// place any extra class members here

#line 81 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 43 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 94 "myparser.h"
#define IDENTIFIER 257
#define NUMBER 258
#define INC_OP 259
#define DEC_OP 260
#define LEFT_OP 261
#define RIGHT_OP 262
#define LE_OP 263
#define GE_OP 264
#define EQ_OP 265
#define NE_OP 266
#define AND_OP 267
#define OR_OP 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define LEFT_ASSIGN 274
#define RIGHT_ASSIGN 275
#define AND_ASSIGN 276
#define ARROW 277
#define OR_ASSIGN 278
#define TYPE_NAME 279
#define CHAR 280
#define INT 281
#define DOUBLE 282
#define VOID 283
#define BOOL 284
#define STRUCT_ID 285
#define CASE 286
#define IF 287
#define ELSE 288
#define SWITCH 289
#define WHILE 290
#define DO 291
#define FOR 292
#define GOTO 293
#define CONTINUE 294
#define BREAK 295
#define RETURN 296
#define TRUE 297
#define FALSE 298
#define FLOAT 299
#define MAIN 300
#define SCANF 301
#define STRUCT 302
#define HEAD 303
#define FORMAT 304
#define PRINT 305
#define UMINUS 306
#endif
