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
%token DOT SLASH FN CM PO PC BO BC TO TC PIPE AR L_SEP WC MAP
%token PLUS MINUS MULT DIV1 DIV2 REM
%token AND AND2 OR OR2 NOT NOT2
%token EQ EQ2 LT GT
%token MOD_CALL ALIAS
%token IF ELSE COND CASE GUARD IF1 IF2
%token <str> STR MOD NAME EXP CHRL KEY
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END MDOC DOC DOCCONT ENDDOC NIL
%type <str> def modulo mod_cab mod moddoc fdoc docs funciones funcion cuerpo
%type <str> parametros param params expr lista listcont keyword kw_cont map map_cont
%type <str> num bool tupla if cond case op fanon
%type <i> op_ar concat_l concat_s
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
  | value {}
  | condicion {}
  | op {}
  | fcall {}
  | PO expr PC {}
  | fanon {}
  ;

var : NAME {}
  | var_l {}
  | var_t {}
  ;

var_l : BO var_col_cont BC {}
  | BO var L_SEP var BC {}
  | var_l PLUS PLUS var_l {}
  ;

var_t : TO var_col_cont TC {}

var_col_cont : var_col_cont CM var {}
  | var {}
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
  | op_log AND op_log {}
  | op AND2 op {}
  | op_log OR op_log {}
  | op OR2 op {}
  | NOT op {}
  | NOT2 op_log {}
  ;

op_comp : expr EQ2 expr {}
  | expr NOT EQ expr {}
  | expr LT expr {}
  | expr LT EQ expr {}
  | expr GT expr {}
  | expr GT EQ expr {}
  ;

num : NAME {}
  | INT {}
  | REAL {}
  ;

value : INT {}
  | REAL {}
  | string {}
  | ATOM {}
  | bool {}
  | NIL {}
  | lista {}
  | tupla {}
  | keyword {}
  | map {}
  | WC {}
  ;

string : STR {}
  | concat_s {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

concat_l : concat_l PLUS PLUS lista {}
  | lista PLUS PLUS lista {}
  ;

concat_s : concat_s LT GT STR {}
  | STR LT GT STR {}
  | NAME LT GT STR {}
  | NAME LT GT NAME {}
  | STR LT GT NAME {}
  ;

lista : BO BC {}
  | BO listcont BC {}
  | BO expr L_SEP expr BC {}
  | CHRL {}
  | concat_l {}
  | var_l {}
  | NAME {}
  ;

listcont : listcont CM expr {}
  | expr {}
  ;

tupla : TO TC {}
  | TO listcont TC {}
  | var_t {}
  ;

keyword : BO kw_cont BC {}
  ;

kw_cont : kw_cont CM KEY expr {}
  | kw_cont CM TO KEY expr TC {}
  | KEY expr {}
  | TO KEY expr TC {}
  ;

map : MAP TO map_cont TC {}
  | MAP TO TC {}
  ;

map_cont : map_cont CM expr EQ GT expr {}
  | map_cont CM KEY expr {}
  | expr EQ LT expr {}
  | KEY expr {}
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

fanon : PO fanon PC {}
  | FN parametros AR cuerpo END {}
  | FN params AR cuerpo END {}
  | FN AR cuerpo END {}
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
