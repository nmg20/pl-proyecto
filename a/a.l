%option yylineno
%{
#include <stdlib.h>
#include "practica2.tab.h"
%}

nl        [\n\r]
ws        [ \t]
de         ({ws}*)?"def"{ws}     
dm        ({ws}*)?"defmodule"{ws}
do        "do"
en        "end"
%%
{ws}* {}
{nl}* {}
{open}{version}                    {yylval.valFloat=atof(yytext);return VERSION;}
{ws}?{encoding}{close}             {yylval.valStr=strdup(yytext);return ENCODING;}
{open}"!--"{comment}"--"{close}    {yylval.valStr=strdup(yytext);return COM;}
{open}{tagname}{close}             {yylval.valStr=strdup(yytext);return TAG_O;}
{open}"/"{tagname}{close}          {yylval.valStr=strdup(yytext);return TAG_C;}
{tagcont}                          {yylval.valStr=strdup(yytext);return CONT;}
.                                  {yylval.valFloat=atof(yytext);return ERROR;}
%%

