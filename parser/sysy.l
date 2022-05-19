%option noyywrap
%{
#include "sysy.tab.h"
#include "string.h"
#include "def.h"
int yycolumn=1;
#define YY_USER_ACTION    	yylloc.first_line=yylloc.last_line=yylineno; \
	yylloc.first_column=yycolumn;	yylloc.last_column=yycolumn+yyleng-1; yycolumn+=yyleng;
typedef union {
	int type_int;
	int type_float;
	char type_id[32];
	struct node *ptr;
} YYLVAL;
#define YYSTYPE YYLVAL

%}
%option yylineno
DIGIT [0-9]
LETTER [a-zA-Z]
id   ({LETTER}|_)({LETTER}|_|{DIGIT})*
int    [0-9]+
float  ([0-9]*\.[0-9]+)|([0-9]+\.)
SGPS \/\/.*
DBPS \/\*(.|\n)*\*\/
%%
{int}        {yylval.type_int=atoi(yytext); return INT;}
{float}      {yylval.type_float=atof(yytext); return FLOAT;}
"int"        {strcpy(yylval.type_id,  yytext);return TYPE;}
"float"      {strcpy(yylval.type_id,  yytext);return TYPE;}

"return"     {return RETURN;}
"if"         {return IF;}
"else"       {return ELSE;}
"for"		{return FOR;}
"while"     {return WHILE;}
"continue"	{return CONTINUE;}
"break"		{return BREAK;}

{id}       {strcpy(yylval.type_id,  yytext); return ID;/*由于关键字的形式也符合表示符的规则，所以把关键字的处理全部放在标识符的前面，优先识别*/}
";"			{return SEMI;}
","			{return COMMA;}
">"|"<"|">="|"<="|"=="|"!=" {strcpy(yylval.type_id, yytext);;return RELOP;}
"="			{return ASSIGNOP;}
"++"		{return AUTOPLUS;}
"--"		{return AUTOMINUS;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return STAR;}
"/"			{return DIV;}
"%" 		{return MOD;}
"&&"         {return AND;}
"||"            {return OR;}
"!"			{return NOT;}
"("			{return LP;}
")"			{return RP;}
"{"			{return LC;}
"}"			{return RC;}
"["			{return LB;}
"]" 		{return RB;}
[\n]           {yycolumn=1;}   
[ \r\t]          {}   
{SGPS}|{DBPS}	{}
%%

/* 和bison联用时，不需要这部分
void main()
{
yylex();
return 0;
}
.			{printf("Error type A :Mysterious character \"%s\"\n\t at Line %d\n",yytext,yylineno);}
*/

