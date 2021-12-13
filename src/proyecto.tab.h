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
    L_SEP = 269,
    MOD_CALL = 270,
    ALIAS = 271,
    STR = 272,
    MOD = 273,
    NAME = 274,
    ATOM = 275,
    INT = 276,
    TRUE = 277,
    FALSE = 278,
    REAL = 279,
    DM = 280,
    DEF = 281,
    DEFP = 282,
    DO = 283,
    DO2 = 284,
    END = 285,
    MDOC = 286,
    DOC = 287,
    DOCCONT = 288,
    ENDDOC = 289,
    NIL = 290
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
#define L_SEP 269
#define MOD_CALL 270
#define ALIAS 271
#define STR 272
#define MOD 273
#define NAME 274
#define ATOM 275
#define INT 276
#define TRUE 277
#define FALSE 278
#define REAL 279
#define DM 280
#define DEF 281
#define DEFP 282
#define DO 283
#define DO2 284
#define END 285
#define MDOC 286
#define DOC 287
#define DOCCONT 288
#define ENDDOC 289
#define NIL 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  float real;

#line 131 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
