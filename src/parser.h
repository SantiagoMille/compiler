#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct  example  {
    char * place;
    char *name;
	double dval;
	int    ival;
	char type;
};

struct Stack 
{ 
    int top; 
    unsigned capacity; 
    struct symbol* array[100]; 
};

struct example typeexpr;

struct symbol {
    char type;	
    char *name;
};


struct quadruple {
	char *op;
	char *arg1;
	char *arg2;
	char *res;
};

#define NQUAD 1000
  struct quadruple quadtab[NQUAD];

#define NHASH 9997
  struct symbol symtab[NHASH];

  struct symbol *lookup(char*);

  char find(char*);

struct symbol *place;

int yyerror(char *);

void pop(struct Stack*);

void push(struct Stack* , struct symbol* );

int yylex();
