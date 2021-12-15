%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
extern int yylineno;
void yyerror(char const *message);
%}
%union{
  char * str;
  char * atom;
  int i;
  int bool;
  float real;
}
%token DOT SLASH CM PO PC BO BC TO TC PIPE AR L_SEP WC
%token PLUS MINUS MULT DIV1 DIV2 REM
%token AND1 AND2 OR1 OR2 NOT1 NOT2
%token EQ NEQ LT LTE GT GTE
%token MOD_CALL ALIAS
%token IF ELSE COND CASE GUARD IF1 IF2
%token <str> STR MOD NAME EXP CHRL
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END MDOC DOC DOCCONT ENDDOC NIL
%type <str> def modulo mod_cab mod moddoc fdoc docs funciones funcion cuerpo
%type <str> parametros param params expr lista listcont
%type <str> num bool tupla if cond case op
%type <i> op_ar
%start Program
%%

Program : modulo {printf("Formato correcto!\n");}

modulo : mod_cab moddoc funciones END {}
  ;

mod_cab : DM mod DO {}
  ;

mod : mod DOT MOD {}
  | MOD {}
  ;

def : DEF {}
  | DEFP {}
  ;

moddoc : MDOC docs ENDDOC {}
  |
  ;

fdoc : DOC docs ENDDOC {}
  |
  ;

docs : docs DOCCONT {}
  | DOCCONT {}
  ;

funciones : funciones fdoc funcion {}
  | fdoc funcion {}
  ;

funcion : def NAME parametros DO cuerpo END {}
  | def NAME parametros CM DO2 cuerpo {}
  ;

parametros : PO params PC {}
  | PO PC {}
  ;

params : params CM param {}
  | param {}
  ;

param : expr {}
  ;

expr : var {}
  | condicion {}
  | op {}
  | fcall {}
  | PO expr PC {}
  ;

var : NAME {}
  | value {}
  ;

op : op_ar {}
  | op_log {}
  | op_comp {}
  ;

op_ar : num {}
  | op_ar PLUS op_ar {}
  | op_ar MINUS op_ar {}
  | op_ar MULT op_ar {}
  | DIV1 PO op_ar CM op_ar PC {}
  | op_ar DIV2 op_ar {}
  | REM PO op_ar CM op_ar PC {}
  | PO op_ar PC {}
  ;

op_log : bool {}
  | op_log AND1 op_log {}
  | op AND2 op {}
  | op_log OR1 op_log {}
  | op OR2 op {}
  | NOT1 op_log {}
  | NOT2 op {}
  ;

op_comp : expr EQ expr {}
  | expr NEQ expr {}
  | expr LT expr {}
  | expr LTE expr {}
  | expr GT expr {}
  | expr GTE expr {}
  ;

num : NAME {}
  | INT {}
  | REAL {}
  ;

value : INT {}
  | REAL {}
  | STR {}
  | ATOM {}
  | bool {}
  | NIL {}
  | lista {}
  | tupla {}
  | WC {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

lista : BO BC {}
  | BO listcont BC {}
  | BO expr L_SEP expr BC {}
  | CHRL {}
  ;

listcont : listcont CM expr {}
  | expr {}
  ;

tupla : TO TC {}
  | TO listcont TC {}
  ;

condicion : if {}
  | cond {}
  | case {}
  ;

if : IF expr DO expr ELSE expr END {}
  | IF expr DO expr END {}
  ;

cond : COND DO conds END {}
  ;

conds : conds expr AR expr {}
  | expr AR expr {}
  ;

case : CASE expr DO conds END {}
  ;

fcall : MOD DOT NAME params {}
  | NAME parametros {}
  ;

cuerpo : cuerpo expr
  | {}
  ;




%%

int main(int argc, char *argv[]) {
extern FILE *yyin;
  switch (argc) {
    case 1: yyin=stdin;
      yyparse();
      break;
    case 2: yyin = fopen(argv[1], "r");
      if (yyin == NULL) {
        printf("ERROR: No se ha podido abrir el fichero.\n");
      }
      else {
        yyparse();
        fclose(yyin);
      }
      break;
    default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
  }
  return 0;
}
