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
  float real;
}
%token DOT SLASH CM PO PC BO BC EQ PIPE
%token <str> STR MOD NAME
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END MDOC DOC DOCCONT ENDDOC NIL
%type <str> def modulos modulo mod_cab mod documentacion docs funciones fun_cab funcion cuerpo
%type <str> parametros param params var lista listcont
%type <str> bool
%start Program
%%

Program : modulos {printf("Formato correcto!\n");}

modulos : modulos modulo {}
  | modulo {}
  ;

modulo : mod_cab funciones END {}
  ;

mod_cab : DM mod DO {}
  ;

mod : mod DOT MOD {}
  | MOD {}
  ;

def : DEF {}
  | DEFP {}
  ;

documentacion : MDOC docs ENDDOC {}
  | MDOC docs ENDDOC DOC docs ENDDOC {}
  | DOC docs ENDDOC {}
  ;

docs : docs DOCCONT {}
  | DOCCONT {}
  ;

funciones : funciones documentacion funcion {}
  | documentacion funcion {}
  ;

funcion : fun_cab cuerpo END {}
  ;

fun_cab : def NAME parametros DO {}
  | def NAME parametros CM DO2 {}
  ;

parametros : PO params PC {}
  | PO PC {}
  ;

params : params CM param {}
  | param {}
  ;

param : NAME {}
  ;

var : NAME {}
  | value {}
  ;

value : INT {}
  | REAL {}
  | STR {}
  | ATOM {}
  | bool {}
  | NIL {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

lista : BO BC {}
  | BO listcont BC {}
  ;

listcont : listcont CM var {}
  | var {}
  ;

cuerpo : lista {}
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
