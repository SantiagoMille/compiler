%{
#include "parser.h"
#include "parser.tab.h"
int num_lines = 1;
%}

%%
" "											{}
"\t"										{}
\/\/[^\n]*\n        						{}
\/\*[a-zA-Z0-9_\n' ']*[^*/]\*\/				{}
"auto"										{return(AUTO);}
"break"										{return(BREAK);}
"case"										{return(CASE);}
"char"										{return(CHAR);}
"continue"									{return(CONTINUE);}
"do"									    {return(DO);}
"default"									{return(DEFAULT);}
"const"										{return(CONST);}
"double"									{yylval.t = 'D'; return(DOUBLE);}
"else"										{return(ELSE);}
"enum"										{return(ENUM);}
"extern"									{return(EXTERN);}
"for"								    	{return(FOR);}
"if"										{return(IF);}
"goto"										{return(GOTO);}
"float"										{return(FLOAT);}
"int"										{yylval.t = 'I'; return(INT);}
"long"										{return(LONG);}
"register"									{return(REGISTER);}
"return"									{return(RETURN);}
"signed"									{return(SIGNED);}
"static"									{return(STATIC);}
"sizeof"									{return(SIZEOF);}
"short"										{return(SHORT);}
"struct"									{return(STRUCT);}
"switch"									{return(SWITCH);}
"typedef"									{return(TYPEDEF);}
"union"										{return(UNION);}
"void"										{return(VOID);}
"while"										{return(WHILE);}
"volatile"									{return(VOLATILE);}
"unsigned"									{return(UNSIGNED);}
"bool"										{return(BOOLEAN);}
"repeat"									{return(REPEAT);}
"print"										{return(PRINT);}
"readint"									{return(READINT);}
"readdouble"								{return(READDOUBLE);}
[+*()-/%<>=!;,{}]							{return(yytext[0]);}
"<="									  	{return(LESSOREQUAL);}
">="										{return(GREATEROREQUAL);}
"=="										{return(EQUALEQUAL);}
"!="										{return(NOTEQUAL);}
"&&"										{return(AND);}
"||"										{return(OR);}
[0-9]+ 										{yylval = atoi(yytext); return(INTCONST);}
[0-9]+\.[0-9]+((E|e)[+-]?[0-9]+)?			{return(DOUBLECONST);}
"true"										{yylval.t = 'T'; return(BOOLEANCONST);}
"false"										{yylval.t = 'F'; return(BOOLEANCONST);}
[a-zA-Z][a-zA-Z0-9_]*						{yylval.s = strdup(yytext); return(IDENT);}
\n											{++num_lines;}
<<EOF>>										{return 0;}
.       									{printf("\nERROR: Illegal token: %s ",yytext); printf("at line %d\n",num_lines);}	
%%
