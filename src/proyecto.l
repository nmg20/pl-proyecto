%option yylineno
%{
#include <stdlib.h>
#include "proyecto.tab.h"
%}

ws         [ \t]
nl         [\n\r]
dm         "defmodule"
mdoc       "@moduledoc"
doc        "@doc"
mod_call   "import"|"use"|"require"
quotes     \"\"\"
doccont    [^\"""]
ifcont     [^"do"]
f          "fn"
ar         "->"
eq         "="
or         "|"[^">""|"]
sum        "+"
int        ([0-9]+"_")?[0-9]+
hex        "0x"([0-9]|[A-F]|[a-f])+
oct        "0o"[0-7]+
bin        "0b"[0-1]+
INT        {int}|{hex}|{oct}|{bin}
REAL       "-"?[0-9]+"."[0-9]+
ATOM       :[a-z_]+
mod        [A-Z][A-Za-z]*
name       ([a-z_]+[A-Z0-9]*)+("?"|"!")?
STR        ([^"]|"\""])+
CHARL      ([^'']|"\'"])+

%s FUN DOCF COM

%%

{ws}      {}
{dm}      {return DM;}
"def"[^"p"]     {return DEF;}
"defp"      {return DEFP;}
"do"[^":"]      {return DO;}
"do:"      {return DO2;}
"end"     {return END;}
"#".[^\n\r]      {}
{mdoc}{ws}+{quotes}   {BEGIN(DOCF);return MDOC;}
{doc}{ws}+{quotes}    {BEGIN(DOCF);return DOC;}
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
"="[^"="]      {return EQ;}
"=="("=")?      {return EQ2;}
">"       {return GT;}
"<"       {return LT;}
"|>"      {return PIPE;}
"."       {return DOT;}
"->"      {return AR;}
"_"{name}?       {return WC;}
"+"       {return PLUS;}
"-"       {return MINUS;}
"div"     {return DIV1;}
"/"       {return DIV2;}
"*"       {return MULT;}
"rem"     {return REM;}
"and"     {return AND;}
"&&"      {return AND2;}
"or"      {return OR;}
"||"      {return OR2;}
"!"       {return NOT;}
"not"     {return NOT2;}
"|"       {return L_SEP;}
"true"       {return TRUE;}
"false"       {return FALSE;}
"nil"       {return NIL;}
"fn"        {return FN;}
"%"         {return MAP;}
"if"|"unless"      {return IF;}
"else"   {return ELSE;}
"cond"    {return COND;}
"case"    {return CASE;}
"alias"{ws}{mod}", as:"{mod} {return ALIAS;}
"import"|"use"|"require"{ws}{mod} {return MOD_CALL;}
{mod}     {yylval.str=strdup(yytext);return MOD;}
{name}    {yylval.str=strdup(yytext);return NAME;}
{name}":" {yylval.str=strdup(yytext);return KEY;}
{INT}     {yylval.i=atoi(yytext);return INT;}
{REAL}    {yylval.real=atof(yytext);return REAL;}
{ATOM}    {yylval.atom=strdup(yytext);return ATOM;}
\"{STR}\" {yylval.str=strdup(yytext);return STR;}
\'{CHARL}\' {yylval.str=strdup(yytext);return CHRL;}
{nl}      {}
.         {printf("[ERROR: %s]\n",strdup(yytext));}
%%

