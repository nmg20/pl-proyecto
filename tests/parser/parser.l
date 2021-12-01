%option yylineno
%{
#include <stdlib.h>
#include "parser.tab.h"
%}

ws         [ \t\n\r]
def        "def"
dp         "defp"
dm         "defmodule"
d1         "do"
d2         "do:"
end        "end"
F          "false"
T          "true"
N          "nil"
W          "when"
A          "and"
O          "or"
n          "not"
f          "fn"
ar         "->"
eq         "="
INT        [0-9]+
REAL       "-"?[0-9]+"."[0-9]+
ATOM       :[a-z_]+
mod       [A-Z]([A-Z]|[a-z])*
name       [a-z_]+
STR        ([^"]|"\""])+

%s FUN

%%

"."       {printf("DOT(.)");return DOT;}
{ws}      {printf(" ");}
{def}     {printf("DEF");return DEF;}
{dp}      {printf("DEFP\n");return DEFP;}
{d1}      {printf("DO\n");return DO;}
{d2}      {printf("DO:\n");return DO2;}
{end}     {printf("END\n");return END;}
","       {printf(",");return CM;}
"("       {printf("(");return BO;}
")"       {printf(")");return BC;}
"\\"      {printf("\\");return SLASH;}
"="       {printf("=");return EQ;}
"|>"      {printf("Pipe(|>)");return PIPE;}
{T}       {printf("true");return TRUE;}
{F}       {printf("false");return FALSE;}
{N}       {printf("nil");return NIL;}
{mod}     {printf("Módulo: %s\n",strdup(yytext));}
{name}    {printf("Nombre: %s\n",strdup(yytext));yylval.str=strdup(yytext);return NAME;}
{INT}     {printf("Entero: %i\n",atoi(yytext));yylval.i=atoi(yytext);return INT;}
{REAL}    {printf("Real: %f\n",atof(yytext));yylval.real=atof(yytext);return REAL;}
{ATOM}    {printf("Átomo: %s\n",strdup(yytext));yylval.atom=strdup(yytext);return ATOM;}
\"{STR}\" {printf("String: %s\n",strdup(yytext));yylval.str=strdup(yytext);return STR;}
.         {printf("[ERROR: %s]\n",strdup(yytext));}
%%

