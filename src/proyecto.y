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
%token DOT SLASH CM PO PC BO BC TO TC EQ PIPE L_SEP
%token <str> STR MOD NAME
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END MDOC DOC DOCCONT ENDDOC NIL
%type <str> def modulo mod_cab mod moddoc fdoc docs funciones funcion cuerpo
%type <str> parametros param params var lista listcont
%type <str> bool tupla tcont
%start Program
%%

Program : modulo {printf("Formato correcto!\n");}


modulo : mod_cab funciones END {}
  ;

mod_cab : DM mod DO moddoc {}
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
  | lista {}
  | tupla {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

lista : BO BC {}
  | BO listcont BC {}
  | BO var L_SEP var BC {}
  ;

listcont : listcont CM var {}
  | var {}
  ;

tupla : TO TC {}
  | TO tcont TC {}
  ;

tcont : tcont CM var {}
  | var {}
  ;

cuerpo : cuerpo value
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
