%{
#include <stdio.h>
int yyerror(char *);
int yylex();
%}

%token AUTO BREAK CASE CHAR CONTINUE DO DEFAULT CONST DOUBLE ELSE ENUM EXTERN FOR IF GOTO FLOAT INT INTCONST IDENT LONG REGISTER RETURN SIGNED STATIC SIZEOF SHORT STRUCT SWITCH TYPEDEF UNION VOID WHILE VOLATILE UNSIGNED BOOLEAN REPEAT PRINT READINT READDOUBLE DOUBLECONST BOOLEANCONST 

//operator precedence
%left AND OR
%right '!'
%left '>' '<' LESSOREQUAL GREATEROREQUAL NOTEQUAL EQUALEQUAL
%left '+' '-'
%left '*' '/'

%%
start : expr {printf("El resultado es: %d \n", $1);}
      ;

expr : expr '+' expr {$$ = $1 + $3;}
     | expr '*' expr {$$ = $1 * $3;}
     | '(' expr ')'  {$$ = $2;}
     | INTCONST	     {$$ = $1;}
     ;
%%

int main(int argc, char **argv)
{
yyparse();
printf("Expresion aceptada \n");
}

int yyerror(char *s)
{
fprintf(stderr,"error: %s\n", s);
}

