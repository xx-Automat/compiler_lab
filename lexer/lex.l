%option noyywrap
%option yylineno

%{
#include <stdio.h>
#include <string.h>

enum Token {
    INT=258, FLOAT, VOID, CONST, RETURN, IF, ELSE, FOR, WHILE, DO, BREAK, CONTINUE,
    LP, RP, LB, RB, LC, RC, COMMA, SEMICOLON, QUESTION, COLON,
    MINUS, NOT, TILDE, ASSIGN, ADD, MUL, DIV, MOD, AND, OR,
    EQ, NE, LT, LE, GT, GE,
    ID, INT_LIT, FLOAT_LIT,
    LEX_ERR
};

%}
DIGIT [0-9]
LETTER [a-zA-Z]
ID ({LETTER}|_)({LETTER}|_|{DIGIT})* 
DEC_LIT 0|[1-9]{DIGIT}*
OCT_LIT 0[0-7]+
HEX_LIT 0[xX][0-9a-fA-F]+
INT_LIT [-+]?{DEC_LIT}|{OCT_LIT}|{HEX_LIT}
FLOAT_LIT [-+]?(({DIGIT}*(\.{DIGIT}+)?([eE]-?{DIGIT}+)?)|(({DIGIT}*\.{DIGIT}+)|({DIGIT}+(\.{DIGIT}+)?)))[fF]?
SGPS \/\/.*
DBPS \/\*(.|\n)*\*\/
ERR_DEC {DIGIT}+{LETTER}+{DIGIT}*
ERR_OCT 0{DIGIT}*[89]{DIGIT}*
ERR_NUM {ERR_DEC}|{ERR_OCT}

%%
"int" {printf("%s : INT\n", yytext); }
"float" {printf("%s : FLOAT\n", yytext); }
"void" {printf("%s : VOID\n", yytext); }
"const" {printf("%s : CONST\n", yytext); }
"return" {printf("%s : RETURN\n", yytext); }
"if" {printf("%s : IF\n", yytext); }
"else" {printf("%s : ELSE\n", yytext); }
"for" {printf("%s : FOR\n", yytext); }
"while" {printf("%s : WHILE\n", yytext); }
"do" {printf("%s : DO\n", yytext); }
"break" {printf("%s : BREAK\n", yytext); }
"continue" {printf("%s : CONTINUE\n", yytext); }
"(" {printf("%s : LP\n", yytext); }
")" {printf("%s : RP\n", yytext); }
"[" {printf("%s : LB\n", yytext); }
"]" {printf("%s : RB\n", yytext); }
"{" {printf("%s : LC\n", yytext); }
"}" {printf("%s : RC\n", yytext); }
"," {printf("%s : COMMA\n", yytext); }
";" {printf("%s : SEMICOLON\n", yytext); }
"?" {printf("%s : QUESTION\n", yytext); }
":" {printf("%s : COLON\n", yytext); }
"-" {printf("%s : MINUS\n", yytext); }
"!" {printf("%s : NOT\n", yytext); }
"~" {printf("%s : TILDE\n", yytext); }
"=" {printf("%s : ASSIGN\n", yytext); }
"+" {printf("%s : ADD\n", yytext); }
"*" {printf("%s : MUL\n", yytext); }
"/" {printf("%s : DIV\n", yytext); }
"%" {printf("%s : MOD\n", yytext); }
"&&" {printf("%s : AND\n", yytext); }
"||" {printf("%s : OR\n", yytext); }
"==" {printf("%s : EQ\n", yytext); }
"!=" {printf("%s : NE\n", yytext); }
"<" {printf("%s : LT\n", yytext); }
"<=" {printf("%s : LE\n", yytext); }
">" {printf("%s : GT\n", yytext); }
">=" {printf("%s : GE\n", yytext); }
{ID} {printf("%s : ID\n", yytext); }
{INT_LIT} {printf("%s : INT_LIT\n", yytext); }
{ERR_NUM} {printf("Lexical error - line %d : %s\n", yylineno, yytext); }
{FLOAT_LIT} {printf("%s : FLOAT_LIT\n", yytext); }
[ \t]+ {}
{SGPS}|{DBPS} {}
%%


int main(int argc, char** argv) {
    if(argc > 1) {
        if(!(yyin = fopen(argv[1], "r"))) {
           perror(argv[1]); 
           return 1; 
        }       
		yylineno=1;
        yylex(); // 或前面都加上return，这里用while(yylex());
        fclose(yyin);
    } else printf("No source file given!\n"); 

    return 0; 
}