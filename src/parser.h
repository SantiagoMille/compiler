#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i; 
struct  example  {
	char type;
	double val;
	int bo,i;
};

struct symbol {
    char type;	
    char *name;
};

#define NHASH 9997
struct symbol symtab[NHASH];

struct symbol *lookup(char*);

struct symbol *place;
