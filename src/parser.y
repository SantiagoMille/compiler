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
    int bo;
}

%token AUTO BREAK CASE CHAR CONTINUE DO DEFAULT CONST ELSE ENUM EXTERN FOR IF GOTO FLOAT LONG REGISTER RETURN SIGNED STATIC SIZEOF SHORT STRUCT SWITCH TYPEDEF UNION VOID WHILE VOLATILE UNSIGNED REPEAT PRINT READINT READDOUBLE  
%token <d> INTCONST DOUBLECONST BOOLEANCONST
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

decll : decll varDec
	| decll funcDec 
	| varDec {} | funcDec {}
	;

varDec : tipo IDENT ';' {place=lookup($2); place->type=$1;};

tipo : DOUBLE {$$ ='D';} 
     | INT {$$ = 'I';} 
     | BOOLEAN {$$='B';}
     ;

funcDec : tipo IDENT '(' formals ')' instrBlock
        | VOID IDENT '(' formals ')' instrBlock;

varDecL : varDecL ',' varDec | varDec | ;

formals : varDecL | VOID;

instrBlock : instrBlock instr | instr;

instr   : varDecL | instrAssign | instrIf | instrWhile | instrReturn | instrPrint | instrBlock;

instrAssign : IDENT '=' expr ;
instrIf : IF'('expr')''{' instrBlock'}'|IF'('expr')''{' instrBlock'}'ELSE'{'instrBlock'}';
instrWhile : WHILE '('expr')''{' instrBlock'}';

instrReturn : RETURN expr;
instrPrint : PRINT'('exprL')';

exprL : exprL ',' expr | expr | ;

expr : expr '+' term {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | term {$$.type = $1.type;}
     | IDENT
     | expr '-' term {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | READINT | READDOUBLE | '!'expr | expr '|''|' expr | expr '&''&' expr  | expr '!''=' expr  | expr '=''=' expr 
     | '>''='expr | expr '>' expr | expr '<''=' expr  | expr '<' expr  | '-' expr | constant | call
     ;

term : term '*' fact {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | term '/' fact {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | term '%' fact {if($1.type == $3.type) $$.type = $1.type;
			else yyerror("tipos incompatibles");}
     | fact {$$.type = $1.type;}
     ;

fact : '(' expr ')' {$$.type = $2.type;}
     | INTCONST {$$.type = 'I';}
     | DOUBLECONST {$$.type = 'D';} 
     | IDENT {place=lookup($1); $$.type=place->type;}
     ;

call : IDENT'('actual')';

actual : exprL;

constant: INTCONST | DOUBLECONST | BOOLEANCONST;

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
	fprintf(stderr,"errorrrr: %s\n", s);
	exit(0);
}

