%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30
int yylex();
extern int yylineno;
void yyerror(char const *message);
char **funs;
int *ars;

int check(char *fname, int arity){
  for(int i=0;i<MAX;i++){
    if(funs[i]!=NULL){
      if(strcmp(funs[i],fname)==0){
        if(ars[i]==arity){
          return 0;
        }
      }
    }
  }
  return 1;
}

int add(char *fname, int arity){
  for(int i=0;i<MAX;i++){
    if(funs[i]==NULL){
      funs[i]=fname;
      ars[i]=arity;
      break;
    }
  }
}

static void error(int l){
  printf("Error en linea %i: ",l-1);
}

%}
%union{
  char * str;
  char * atom;
  int i;
  int bool;
  float real;
}

%token DOT DOTS SLASH FN CM PO PC BO BC TO TC PIPE AR L_SEP WC MAP APND
%token PLUS MINUS MULT DIV1 DIV2 REM 
%token AND AND2 OR OR2 NOT NOT2
%token EQ EQ2 LT GT
%token MOD_CALL FOR ALIAS AS
%token IF ELSE COND CASE GUARD IF1 IF2
%token <str> STR MOD NAME EXP CHRL KEY
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END MDOC DOC DOCCONT ENDDOC NIL
%type <str> modulo mod_cab mod docs funciones funcion cuerpo
%type <str> expr enum lista listcont keyword kw_cont map map_cont
%type <i> parametros params
%type <str> num bool tupla if cond case op fanon val modcall
%type <i> op_ar
%start Program
%%

Program : modulo {printf("Formato correcto!\n");}
  | {printf("Fichero vacío.\n");return 0;}
  ;

modulo : mod_cab modcall funciones END {}
  | mod_cab funciones {error(yylineno); printf("La definición del módulo debe incluir la cláusula 'end'.\n"); return 0;}
  | mod_cab MDOC docs ENDDOC modcall funciones END {}
  ;

mod_cab : DM mod DO {}
  | DM DO {error(yylineno);
    printf("La definición del módulo no puede ser vacía.\n"); return 0;}
  | DM NAME DO {error(yylineno); printf("Nombre de módulo no válido.\n"); return 0;}
  ;

mod : MOD DOT mod {}
  | MOD {}
  | MOD DOT {error(yylineno); printf("Nombre de módulo no válido.\n"); return 0;}
  | NAME {error(yylineno+1); printf("Nombre de módulo no válido.\n"); return 0;}
  ;

mcall : MOD_CALL mod {}
  | ALIAS mod CM AS mod {}
  ;

modcall : modcall mcall {}
  | mcall {}
  | {}
  ;

docs : docs DOCCONT {}
  | DOCCONT {}
  ;

def : DEF {}
  | DEFP {}
  | DEF def {error(yylineno+1); printf("La definición de funciones no anónimas debe contener la expresión 'do' o 'do:'.\n"); return 0;}
  | DEFP def {error(yylineno+1); printf("La definición de funciones no anónimas debe contener la expresión 'do' o 'do:'.\n"); return 0;}
  ;

fdoc : DOC docs ENDDOC {}
  | {}
  ;

funciones : funciones fdoc funcion {}
  | fdoc funcion {}
  ;

funcion : def NAME parametros DO cuerpo END {/*check_fun($2,$3);*/}
  | def NAME parametros CM DO2 cuerpo {/*check_fun($2,$3);*/}
  | def NAME parametros CM DO {error(yylineno+1);printf("La palabra reservada 'do' no puede ir precedida de una coma.\n");return 0;}
  | def NAME CM DO2 cuerpo {}
  | def NAME DO cuerpo END {}
  ;

parametros : PO params PC {$$=$2;}
  | PO PC {$$=0;}
  ;

params : params CM par {$$=$1+1;}
  | par {$$=1;}
  | params CM CM par {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
  | CM {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
  | params CM {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
  ;

par : var {}
  | asig {}
  | num {}
  | val {}
  | bool {}
  | op {}
  ;

expr_abs : par {}
  | expr {}
  ;

expr : condicion {}
  | op {}
  | PO expr PC {}
  | fanon {}
  ;

var_abs : var {}
  | var_l {}
  | var_t {}
  ;

var : NAME {}
  | WC {}
  ;

var_l : BO BC {}
  | BO var_abs BC {}
  | BO var_col_cont BC {}
  | BO var L_SEP var BC {}
  | var_l APND var_l {}
  ;

var_t : TO var_col_cont TC {}

var_col_cont : var_col_cont CM var_abs {}
  | var_abs {}
  ;

asig : NAME EQ val_abs {}
  | NAME EQ expr {}
  | var EQ fcall {}
  | var EQ condicion {}
  | var EQ asig {}
  | var_l EQ lista {}
  | var_t EQ tupla {}
  | var_abs EQ fcall {}
  ;

op : op_ar {}
  | op_log {}
  | op_comp {}
  ;

op_ar : num {}
  | NAME {}
  | fcall {}
  | op_ar PLUS op_ar {}
  | op_ar MINUS op_ar {}
  | op_ar MULT op_ar {}
  | DIV1 PO op_ar CM op_ar PC {}
  | op_ar DIV2 op_ar {}
  | REM PO op_ar CM op_ar PC {}
  | PO op_ar PC {}
  | val {error(yylineno);printf("Operación aritmética no permitida para %s",$1); return 0;}
  ;

op_log : bool {}
  | op_log AND op_log {}
  | op AND2 op {}
  | op_log OR op_log {}
  | op OR2 op {}
  | NOT op {}
  | NOT2 op_log {}
  ;

comp : EQ2 {}
  | NOT EQ {}
  | LT {}
  | LT EQ {}
  | GT {}
  | GT EQ {}
  ;

op_comp : expr comp expr {}
  ;

val_abs : num {}
  | val {}
  | enum {}
  ;

num : INT {}
  | REAL {}
  ;

val : string {}
  | ATOM {}
  | NIL {}
  | enum {}
  | tupla {}
  | keyword {}
  | map {}
  | fcall {}
  ;

string : STR {}
  | string LT GT string {}
  | var LT GT string {}
  | string LT GT var {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

lista : BO BC {}
  | BO listcont BC {}
  | BO expr L_SEP expr BC {}
  | CHRL {}
  | lista APND lista {}
  | fcall {}
  ;

listcont : listcont CM expr {}
  | expr {}
  ;

tupla : TO TC {}
  | TO listcont TC {}
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

enum : lista {}
  | num DOT DOT num {}
  ;

fcall : MOD DOT NAME parametros {}
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
funs=malloc(sizeof(char *)*MAX);
ars=malloc(sizeof(int)*MAX);
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
