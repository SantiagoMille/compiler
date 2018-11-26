%{
#include "parser.h"
#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>
extern int num_lines;
int ntemp = 0;
int mquad = 0;
int yyerror(char *);
int yylex();
char * newtemp (void);
void emit(char *op, char *arg1, char *arg2, char *res);
%}

%union{
  struct example typeexpr;
  char t; 
  struct Stack stack;
}

%token AUTO BREAK  CASE CHAR CONTINUE DO DEFAULT CONST ELSE ENUM EXTERN FOR IF GOTO FLOAT LONG REGISTER RETURN SIGNED STATIC SIZEOF SHORT STRUCT SWITCH TYPEDEF UNION VOID WHILE VOLATILE UNSIGNED REPEAT PRINT READINT READDOUBLE 
%token <t> DOUBLE INT BOOLEAN
%token <typeexpr> IDENT INTCONST DOUBLECONST BOOLEANCONST 
%type <typeexpr> expr constant instrAssign call
%type <typeexpr> decll 
%type <t> tipo

//operator precedence
%left '='
%left OR
%left AND
%left NOTEQUAL EQUALEQUAL
%left '>' '<' LESSOREQUAL GREATEROREQUAL 
%left '+' '-'
%left '*' '/' '%'
%left '!'

%%

prog : decll ;

decll   : decll varDec 
	| varDec 
	| decll funcDec 
	| funcDec 
	;


varDec : var ';' ;

var    : tipo IDENT { if(!find($2.place))
                              {
                                place = lookup($2.place); 
                                place -> type = $1;
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", $2.place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
        ;

tipo : DOUBLE {$$ = 'D';}
     | INT {$$ = 'I';} 
     | BOOLEAN {$$ = 'B';}
     ;

openScope : '{' {struct symbol symtab[NHASH];
		 push(stack, symtab);
		};

closeScope : '}' {
		  pop(stack);
		 };

funcDec : tipo IDENT '(' formals ')' openScope instrBlock closeScope { if(!find($2.place))
                              {
                                place = lookup($2.place); 
                                place -> type = $1;
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", $2.place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
        | VOID IDENT '(' formals ')' openScopeinstrBlock  closeScope  { if(!find($2.place))
                              {
                                place = lookup($2.place); 
                                place -> type = VOID;
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", $2.place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
        ; 

varDecL : varDecL ',' var | var ;

varDecLL : varDecL ';';

formals : varDecL | VOID | ;

instrBlock : instrBlock instr 
           | instr;

instr   : varDecL | instrAssign | instrIf | instrWhile | instrRepeat | instrReturn | instrPrint | instrBlock | exprL | expr | call | varDec;

instrAssign : IDENT '=' expr ';'  {emit("=", $3.place, "" , $1.place);}
            |IDENT '=' exprL ';'  
            |IDENT '=' actual ';' 
            |IDENT '=' call ';'   {emit("=", $3.place, "" , $1.place);}
            ;

instrIf : IF '(' exprL ')' openScope instrBlock  closeScope  {}
        |IF'('exprL ')' openScope instrBlock  closeScope  ELSE openScope instrBlock  closeScope ;

instrWhile : WHILE '(' exprL ')' openScope instrBlock closeScope  
	   | ;

instrRepeat : REPEAT openScope instrBlock closeScope  '('expr')';

instrReturn : RETURN expr ';';

instrPrint : PRINT'(' varDecL ')'';'
           | PRINT'('expr')'';'
           | PRINT'('exprL')'';';

call : IDENT'('actual')'';';

actual : exprL| ;

exprL : exprL ',' expr 
      | expr ;

expr : expr '+' expr  { if($1.type == $3.type) $$.type = $1.type;
                        else                   yyerror("Incompatible types");
                        $$.place = strdup(newtemp()); 
                        emit("+", $1.place, $3.place, $$.place);}

     | IDENT          {if(find($1.place)) {
                                place=lookup($1.place); 
                                $$.type=place->type;
                                $$.place=$1.place;
                             }
                             else {
                                printf("Identifier not found: %s\n", $1.place); 
                                yyerror("Variable was never declared");
                                exit(0);
                             }
                            }

     | expr '-' expr  { if($1.type == $3.type) $$.type = $1.type;
                        else                   yyerror("Incompatible types");
                        $$.place = strdup(newtemp()); 
                        emit("-", $1.place, $3.place, $$.place);}

     | READINT'('expr')'   {      $$.type = 'I';
                              $$.place = strdup(newtemp()); 
                              }
     | READDOUBLE'('expr')' {      $$.type = 'D';
                              $$.place = strdup(newtemp()); 
                              }

     | '!'expr         {$$.type = $2.type;
                              $$.place = strdup(newtemp()); 
                              emit("not", $2.place, "", $$.place);}

     | expr OR expr     { if($1.type == $3.type) $$.type = $1.type;
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("or", $1.place, $3.place, $$.place);}

     | expr AND expr    { if($1.type == $3.type) $$.type = $1.type;
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("and", $1.place, $3.place, $$.place);}

     | expr NOTEQUAL expr  { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("!=", $1.place, $3.place, $$.place);}


     | expr EQUALEQUAL expr { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("==", $1.place, $3.place, $$.place);}

     | expr GREATEROREQUAL expr { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit(">=", $1.place, $3.place, $$.place);}

     | expr '>' expr  { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit(">", $1.place, $3.place, $$.place);}
     
     | expr LESSOREQUAL expr  { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("<=", $1.place, $3.place, $$.place);}
     
     | expr '<' expr  { if($1.type == $3.type) $$.type = 'B';
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("<", $1.place, $3.place, $$.place);}
     
     | '-' expr 
     
     | constant { $$.type = $1.type;
                  $$.place = strdup(newtemp()); }
     
     | call
     
     | IDENT {if(find($1.place)) {
                                place=lookup($1.place); 
                                $$.type=place->type;
                                $$.place=$1.place;
                             }
                             else {
                                printf("Identifier not found: %s\n", $1.place); 
                                yyerror("Variable was never declared");
                                exit(0);
                             }
                            }
     
     | '(' expr ')' { $$.type = $2.type;
                              $$.place = $2.place;}
     
     | expr '*' expr  { if($1.type == $3.type) $$.type = $1.type;
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("*", $1.place, $3.place, $$.place);}
     
     | expr '/' expr  { if($1.type == $3.type) $$.type = $1.type;
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("/", $1.place, $3.place, $$.place);}
     
     | expr '%' expr  { if($1.type == $3.type) $$.type = $1.type;
                              else                   yyerror("Incompatible types");
                              $$.place = strdup(newtemp()); 
                              emit("%", $1.place, $3.place, $$.place);}
     
     ;



constant : INTCONST {$$.type = 'I'; $$.place=$1.place;} 
         | DOUBLECONST  {$$.type = 'D'; $$.place=$1.place;}
         | BOOLEANCONST {$$.type = 'B'; $$.place=$1.place;}
         ;

%%

static unsigned symhash(char *sym){
  unsigned int hash = 0;
  unsigned c;

  while(c = *sym++) hash = hash*9 ^ c;

  return hash;
}

int nnew, nold;
int nprobe;



struct symbol * lookupstack(char* sym){
  int toptop = stack->top;
  while(toptop>=0){
    struct symbol *sp = &stack->array[toptop][symhash(sym)%NHASH];
    int scount = NHASH;   /* how many have we looked at */

    while(--scount >= 0) {
      nprobe++;
      if(sp->name && !strcmp(sp->name, sym)) { nold++; return sp; }

      if(!sp->name) {   /* new entry */
        nnew++;
        sp->name = strdup(sym);
        return sp;
      }

      if(++sp >= symtab+NHASH) sp = symtab; /* try the next entry */
    }
    toptop--;
  }
  fputs("Symbol table overflow\n", stderr);
  abort(); /* tried them all, table is full */
}

struct symbol * lookup(char* sym){
  struct symbol *sp = &stack->array[stack->top][symhash(sym)%NHASH];
  int scount = NHASH;   /* how many have we looked at */

  while(--scount >= 0) {
    nprobe++;
    if(sp->name && !strcmp(sp->name, sym)) { nold++; return sp; }

    if(!sp->name) {   /* new entry */
      nnew++;
      sp->name = strdup(sym);
      return sp;
    }

    if(++sp >= symtab+NHASH) sp = symtab; /* try the next entry */
  }
  fputs("Symbol table overflow\n", stderr);
  abort(); /* tried them all, table is full */

}

char find (char* sym){
  int toptop = stack->top;
  while(toptop>=0){
    struct symbol *sp = &stack->array[toptop][symhash(sym)%NHASH];
    int scount = NHASH;   /* how many have we looked at */

    while(--scount >= 0){
      if(sp->name && !strcmp(sp->name, sym)) return 1;
    }
    
    toptop--;
  }
  return 0;
}

char * newtemp (void){
  char temp[10];
  sprintf(temp,"t%d",ntemp++);
  return strdup(temp);
}

void emit(char *op, char *arg1, char *arg2, char *res){
  quadtab[mquad].op=strdup(op);
  quadtab[mquad].arg1=strdup(arg1);
  quadtab[mquad].arg2=strdup(arg2);
  quadtab[mquad].res=strdup(res);
  mquad++;
}

struct Stack* createStack(unsigned capacity) { 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (struct symbol*) malloc(stack->capacity * sizeof(struct symbol)); 
    return stack; 
} 

int isFull(struct Stack* stack) 
{   return stack->top == stack->capacity - 1; } 
  
// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{   return stack->top == -1;  } 
  
// Function to add an item to stack.  It increases top by 1 
void push(struct Stack* stack, struct symbol* item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
    //printf("%d pushed to stack\n", item); 
} 
  
// Function to remove an item from stack.  It decreases top by 1 
struct symbol pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return; 
    return stack->array[stack->top--]; 
}

int main(int argc, char **argv)
{
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL))
  {
    printf("Cannot open file %s", argv[1]);
    exit( 1 );
  }
  struct Stack* stack = createStack(100);
	yyparse();
	printf("Accepted expression. \n");

  printf("Intermediate code: \n");
  for(int i=0;i<mquad;i++){
    printf("%s %s %s %s \n",quadtab[i].op, quadtab[i].arg1,quadtab[i].arg2, quadtab[i].res);
  }
}

int yyerror(char *s){
  fprintf(stderr,"Error: %s at line %d\n", s, num_lines);
  exit(0);
}

