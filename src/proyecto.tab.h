/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PROYECTO_TAB_H_INCLUDED
# define YY_YY_PROYECTO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOT = 258,
    SLASH = 259,
    CM = 260,
    PO = 261,
    PC = 262,
    BO = 263,
    BC = 264,
    TO = 265,
    TC = 266,
    EQ = 267,
    PIPE = 268,
    AR = 269,
    L_SEP = 270,
    WC = 271,
    PLUS = 272,
    MINUS = 273,
    MULT = 274,
    DIV1 = 275,
    DIV2 = 276,
    REM = 277,
    AND1 = 278,
    AND2 = 279,
    OR1 = 280,
    OR2 = 281,
    NOT1 = 282,
    NOT2 = 283,
    MOD_CALL = 284,
    ALIAS = 285,
    IF = 286,
    ELSE = 287,
    COND = 288,
    CASE = 289,
    GUARD = 290,
    IF1 = 291,
    IF2 = 292,
    STR = 293,
    MOD = 294,
    NAME = 295,
    EXP = 296,
    CHRL = 297,
    ATOM = 298,
    INT = 299,
    TRUE = 300,
    FALSE = 301,
    REAL = 302,
    DM = 303,
    DEF = 304,
    DEFP = 305,
    DO = 306,
    DO2 = 307,
    END = 308,
    MDOC = 309,
    DOC = 310,
    DOCCONT = 311,
    ENDDOC = 312,
    NIL = 313
  };
#endif
/* Tokens.  */
#define DOT 258
#define SLASH 259
#define CM 260
#define PO 261
#define PC 262
#define BO 263
#define BC 264
#define TO 265
#define TC 266
#define EQ 267
#define PIPE 268
#define AR 269
#define L_SEP 270
#define WC 271
#define PLUS 272
#define MINUS 273
#define MULT 274
#define DIV1 275
#define DIV2 276
#define REM 277
#define AND1 278
#define AND2 279
#define OR1 280
#define OR2 281
#define NOT1 282
#define NOT2 283
#define MOD_CALL 284
#define ALIAS 285
#define IF 286
#define ELSE 287
#define COND 288
#define CASE 289
#define GUARD 290
#define IF1 291
#define IF2 292
#define STR 293
#define MOD 294
#define NAME 295
#define EXP 296
#define CHRL 297
#define ATOM 298
#define INT 299
#define TRUE 300
#define FALSE 301
#define REAL 302
#define DM 303
#define DEF 304
#define DEFP 305
#define DO 306
#define DO2 307
#define END 308
#define MDOC 309
#define DOC 310
#define DOCCONT 311
#define ENDDOC 312
#define NIL 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  float real;

#line 177 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
