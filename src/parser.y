%{
#include "parser.h"
#include <stdio.h>
extern int num_lines;
int yyerror(char *);
int yylex();
%}

%union{
  struct typeexpr;
  char t; 
}

%token AUTO BREAK  CASE CHAR CONTINUE DO DEFAULT CONST ELSE ENUM EXTERN FOR IF GOTO FLOAT LONG REGISTER RETURN SIGNED STATIC SIZEOF SHORT STRUCT SWITCH TYPEDEF UNION VOID WHILE VOLATILE UNSIGNED REPEAT PRINT READINT READDOUBLE INTCONST DOUBLECONST IDENT DOUBLE INT BOOLEAN BOOLEANCONST BR
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

prog : decll expr {printf("\nprog");};

decll : decll ',' varDec {printf("\ndecll1");}
	| decll ',' funcDec {printf("\ndecll2");}
	| varDec | funcDec {printf("\ndecll3");}
	;

varDec : tipo IDENT ';' {printf("\nvarDec1");}
       | tipo IDENT ';' BR {printf("\nvarDec1");}
       | tipo IDENT {printf("\nvarDec1");} ;

tipo : DOUBLE 
     | INT 
     | BOOLEAN 
     ;

funcDec : tipo IDENT '(' formals ')' '{'instrBlock'}' {printf("\nfuncDec1");}
        | VOID IDENT '(' formals ')' '{'instrBlock'}' {printf("\nfuncDec2");};

varDecL : varDecL ',' varDec | varDec ;

formals : varDecL | VOID;

instrBlock : instrBlock instr | instr;

instr   : varDecL | instrAssign | instrIf | instrWhile | instrReturn | instrPrint | instrBlock;

instrAssign : IDENT '=' expr ;
instrIf : IF'('expr')''{' instrBlock'}'|IF'('expr')''{' instrBlock'}'ELSE'{'instrBlock'}';
instrWhile : WHILE '('expr')''{' instrBlock'}';

instrReturn : RETURN expr;
instrPrint : PRINT'('exprL')';

exprL : expr ',' exprL | expr | VOID;

expr : expr '+' term {}
     | term {}
     | IDENT
     | expr '-' term {}
     | READINT | READDOUBLE | '!'expr | expr '|''|' expr | expr '&''&' expr  | expr '!''=' expr  | expr '=''=' expr 
     | '>''='expr | expr '>' expr | expr '<''=' expr  | expr '<' expr  | '-' expr | constant | call
     ;

term : term '*' fact {}
     | term '/' fact {}
     | term '%' fact {}
     | fact {}
     ;

fact : '(' expr ')' {}
     | INTCONST {}
     | DOUBLECONST {} 
     | IDENT {}
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
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL))
  {
    printf("Cannot open file %s", argv[1]);
    exit( 1 );
  }
	yyparse();
	printf("Expresion aceptada \n");
}

int yyerror(char *s)
{
	fprintf(stderr,"error: %s %d\n", s, num_lines);
	exit(0);
}

