#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main()
{
	char line1[100], line2[100], line3[100];
	strcpy(line1,"flex scanner.l");
	strcpy(line2,"bison -d parser.y");
	strcpy(line3,"gcc -o compiler lex.yy.c parser.tab.c -lfl");
	printf("Executing: %s\n", line1);
	system(line1);
	printf("Executing: %s\n", line2);
	system(line2);
	printf("Executing: %s\n", line3);
	system(line3);
	return 0;

}
