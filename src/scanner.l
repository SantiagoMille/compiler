%{
#include "parser.h"
#include "parser.tab.h"
int num_lines = 0;
%}

%%
" "											{}
"\t"										{}
\/\/[^\n]*\n        						{printf("\nCOMMENT");}
\/\*[a-zA-Z0-9_\n' ']*[^*/]\*\/				{printf("\nCOMMENT");}
"auto"										{printf("\nAUTO"); return(AUTO);}
"break"										{printf("\nBREAK"); return(BREAK);}
"case"										{printf("\nCASE"); return(CASE);}
"char"										{printf("\nCHAR"); return(CHAR);}
"continue"									{printf("\nCONTINUE"); return(CONTINUE);}
"do"									    {printf("\nDO"); return(DO);}
"default"									{printf("\nDEFAULT"); return(DEFAULT);}
"const"										{printf("\nCONST"); return(CONST);}
"double"									{printf("\nDOUBLE"); yylval.t = 'D'; return(DOUBLE);}
"else"										{printf("\nELSE"); return(ELSE);}
"enum"										{printf("\nENUM"); return(ENUM);}
"extern"									{printf("\nEXTERN"); return(EXTERN);}
"for"								    	{printf("\nFOR"); return(FOR);}
"if"										{printf("\nIF"); return(IF);}
"goto"										{printf("\n\nGOTO"); return(GOTO);}
"float"										{printf("\nFLOAT"); return(FLOAT);}
"int"										{printf("\nINT"); yylval.t = 'I'; return(INT);}
"long"										{printf("\nLONG"); return(LONG);}
"register"									{printf("\nREGISTER"); return(REGISTER);}
"return"									{printf("\nRETURN"); return(RETURN);}
"signed"									{printf("\nSIGNED"); return(SIGNED);}
"static"									{printf("\nSTATIC"); return(STATIC);}
"sizeof"									{printf("\nSIZEOF"); return(SIZEOF);}
"short"										{printf("\nSHORT"); return(SHORT);}
"struct"									{printf("\nSTRUCT"); return(STRUCT);}
"switch"									{printf("\nSWITCH"); return(SWITCH);}
"typedef"									{printf("\nTYPEDEF"); return(TYPEDEF);}
"union"										{printf("\nUNION"); return(UNION);}
"void"										{printf("\nVOID"); return(VOID);}
"while"										{printf("\nWHILE"); return(WHILE);}
"volatile"									{printf("\nVOLATILE"); return(VOLATILE);}
"unsigned"									{printf("\nUNSIGNED"); return(UNSIGNED);}
"bool"										{printf("\nBOOL"); return(BOOLEAN);}
"repeat"									{printf("\nREPEAT"); return(REPEAT);}
"print"										{printf("\nPRINT"); return(PRINT);}
"readint"									{printf("\nREADINT"); return(READINT);}
"readdouble"								{printf("\nREADDOUBLE"); return(READDOUBLE);}
[+*()-/%<>=!;,{}]							{printf("\nOperator or delimiter"); return(yytext[0]);}
"<="									  	{printf("\nLESSOREQUAL"); return(LESSOREQUAL);}
">="										{printf("\nGREATEROREQUAL"); return(GREATEROREQUAL);}
"=="										{printf("\nEQUALEQUAL"); return(EQUALEQUAL);}
"!="										{printf("\nNOTEQUAL"); return(NOTEQUAL);}
"&&"										{printf("\nAND"); return(AND);}
"||"										{printf("\nOR"); return(OR);}
[0-9]+ 										{printf("\nINTCONST"); return(INTCONST);}
[0-9]+\.[0-9]+((E|e)[+-]?[0-9]+)?			{printf("\nINTCONST"); return(DOUBLECONST);}
"true"										{printf("\nBOOLEANCONST"); yylval.num = atoi("1"); return(BOOLEANCONST);}
"false"										{printf("\nBOOLEANCONST"); yylval.num = atoi("0"); return(BOOLEANCONST);}
[a-zA-Z][a-zA-Z0-9_]*						{printf("\nIDENT"); yylval.s = strdup(yytext); return(IDENT);}
\n											{++num_lines;}
.       									{printf("\nERROR: Illegal token: %s ",yytext); printf("at line %d\n",num_lines);}	
%%