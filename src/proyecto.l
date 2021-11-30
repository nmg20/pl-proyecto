%option yylineno
%{
#include <stdlib.h>
#include "proyecto.tab.h"
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
mod        [A-Z]([A-Z]|[a-z])*
name       [a-z_]+
STR        ([^"]|"\""])+

%s FUN

%%

{ws}      {printf(" ");}
{dm}      {printf("DM");return DM;}
{def}     {printf("DEF");return DEF;}
{dp}      {printf("DEFP");return DEFP;}
{d1}      {printf("DO\n");return DO;}
{d2}      {printf("DO:");return DO2;}
{end}     {printf("END\n");return END;}
","       {printf(",");return CM;}
"("       {printf("(");return BO;}
")"       {printf(")");return BC;}
"\\"      {printf("\\");return SLASH;}
"="       {printf("=");return EQ;}
"|>"      {printf("|>");return PIPE;}
"."       {printf(".");return DOT;}
{T}       {printf("true");return TRUE;}
{F}       {printf("false");return FALSE;}
{N}       {printf("nil");return NIL;}
{mod}     {printf("%s",strdup(yytext));yylval.str=strdup(yytext);return MOD;}
{name}    {printf("%s",strdup(yytext));yylval.str=strdup(yytext);return NAME;}
{INT}     {printf("%i",atoi(yytext));yylval.i=atoi(yytext);return INT;}
{REAL}    {printf("%f",atof(yytext));yylval.real=atof(yytext);return REAL;}
{ATOM}    {printf("%s\n",strdup(yytext));yylval.atom=strdup(yytext);return ATOM;}
\"{STR}\" {printf("%s\n",strdup(yytext));yylval.str=strdup(yytext);return STR;}
.         {printf("[ERROR: %s]\n",strdup(yytext));}
%%

