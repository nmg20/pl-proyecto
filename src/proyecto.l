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
mdoc        "@moduledoc"
doc        "@doc"
mod_call   "import"|"use"|"require"
quotes     \"\"\"
doccont    [^\"""]
ifcont     [^"do"]
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
or         "|"[^">"]
sum        "+"
INT        [0-9]+
REAL       "-"?[0-9]+"."[0-9]+
ATOM       :[a-z_]+
mod        [A-Z][A-Za-z]*
name       [a-z_]+
STR        ([^"]|"\""])+

%s FUN DOCF 

%%

{ws}      {}
{dm}      {return DM;}
{def}     {return DEF;}
{dp}      {return DEFP;}
{d1}      {return DO;}
{d2}      {return DO2;}
{end}     {return END;}
{mdoc}{ws}+{quotes}   {BEGIN(DOCF);return MDOC;}
{doc}{ws}+{quotes}    {BEGIN(DOCF);return DOC;}
<DOCF>{ws}               {}
<DOCF>{doccont}+         {return DOCCONT;}
<DOCF>{quotes}          {BEGIN(INITIAL);return ENDDOC;}
","       {return CM;}
[(]       {return PO;}
[)]       {return PC;}
[{]       {return TO;}
[}]       {return TC;}
"["       {return BO;}
"]"       {return BC;}
"\\"      {return SLASH;}
"="       {return EQ;}
"|>"      {return PIPE;}
"."       {return DOT;}
"->"      {return AR;}
"_"       {return WC;}
{or}      {printf("List Separator\n");return L_SEP;}
{T}       {return TRUE;}
{F}       {return FALSE;}
{N}       {return NIL;}
"import"|"use"|"require"{ws}{mod} {return MOD_CALL;}
"if"|"unless"      {return IF;}
"else"   {return ELSE;}
"cond"    {return COND;}
"case"    {return CASE;}
"alias"{ws}{mod}", as:"{mod} {return ALIAS;}
{mod}     {yylval.str=strdup(yytext);return MOD;}
{name}    {yylval.str=strdup(yytext);return NAME;}
{INT}     {yylval.i=atoi(yytext);return INT;}
{REAL}    {yylval.real=atof(yytext);return REAL;}
{ATOM}    {yylval.atom=strdup(yytext);return ATOM;}
\"{STR}\" {yylval.str=strdup(yytext);return STR;}
.         {printf("[ERROR: %s]\n",strdup(yytext));}
%%

