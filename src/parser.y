%{
#include <stdio.h>
#include "parser.h"
int yyerror(char *);
int yylex();
%}

%union{

    struct example typeexpr;
    int num;
	  double d;
	  char *s;
    char t;
}

%token AUTO BREAK CASE CHAR CONTINUE DO DEFAULT CONST ELSE ENUM EXTERN FOR IF GOTO FLOAT LONG REGISTER RETURN SIGNED STATIC SIZEOF SHORT STRUCT SWITCH TYPEDEF UNION VOID WHILE VOLATILE UNSIGNED BOOLEAN REPEAT PRINT READINT READDOUBLE BOOLEANCONST 
%token <d> INTCONST DOUBLECONST
%token <s> IDENT
%token <t> DOUBLE INT BOOLEAN
%type <typeexpr> expr
%type <typeexpr> term
%type <typeexpr> fact
%type <typeexpr> decll
%type <t> tipo

//operator precedence
%left AND OR
%right '!'
%left '>' '<' LESSOREQUAL GREATEROREQUAL NOTEQUAL EQUALEQUAL
%left '+' '-'
%left '*' '/'

%%

prog : decll expr
      ;

decll : decll decl 
	| decl {}
	;

decl : tipo IDENT ';' {place=lookup($2); place->type=$1;}

tipo : DOUBLE {$$ ='D';} 
     | INT {$$ = 'I';} 
     | BOOL {$$='B'}
     ;

expr : expr '+' term {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | term {$$.type = $1.type;}
     ;

term : term '*' fact {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | fact {$$.type = $1.type;}
     ;

fact : '(' expr ')' {$$.type = $2.type;}
     | INTCONST {$$.type = 'I';}
     | DOUBLECONST {$$.type = 'D';} 
     | IDENT {place=lookup($1); $$.type=place->type;}
     ;
%%

static unsigned
symhash(char *sym)
{
  unsigned int hash = 0;
  unsigned c;

  while(c = *sym++) hash = hash*9 ^ c;

  return hash;
}

int nnew, nold;
int nprobe;

struct symbol *
lookup(char* sym)
{
  struct symbol *sp = &symtab[symhash(sym)%NHASH];
  int scount = NHASH;		/* how many have we looked at */

  while(--scount >= 0) {
    nprobe++;
    if(sp->name && !strcmp(sp->name, sym)) { nold++; return sp; }

    if(!sp->name) {		/* new entry */
      nnew++;
      sp->name = strdup(sym);
      return sp;
    }

    if(++sp >= symtab+NHASH) sp = symtab; /* try the next entry */
  }
  fputs("symbol table overflow\n", stderr);
  abort(); /* tried them all, table is full */

}

int main(int argc, char **argv)
{
	yyparse();
	printf("Expresion aceptada \n");
}

int yyerror(char *s)
{
	fprintf(stderr,"error: %s\n", s);
	exit(0);
}

