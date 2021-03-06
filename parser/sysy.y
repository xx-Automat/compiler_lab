%error-verbose
%locations
%{
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
extern char filename[50];
int yylex();
void yyerror(const char* fmt, ...);
void display(struct node *,int);
%}

%union {
	int    type_int;
	float  type_float;
	char   type_id[32];
	struct node *ptr;
};

//  %type 定义非终结符的语义值类型
%type  <ptr> program ExtDefList ExtDef  Specifier ExtDecList FuncDec CompSt VarList VarDec ParamDec Stmt StmList DefList Def DecList Dec Exp Args BlockList BlockItem Dim DimDec

//% token 定义终结符的语义值类型
%token <type_int> INT              //指定INT的语义值是type_int，有词法分析得到的数值
%token <type_id> ID RELOP TYPE  //指定ID,RELOP 的语义值是type_id，有词法分析得到的标识符字符串
%token <type_float> FLOAT         //指定ID的语义值是type_id，有词法分析得到的标识符字符串

%token LP RP LC RC LB RB SEMI COMMA   //用bison对该文件编译时，带参数-d，生成的exp.tab.h中给这些单词进行编码，可在lex.l中包含parser.tab.h使用这些单词种类码
%token AUTOPLUS AUTOMINUS PLUS MINUS STAR DIV MOD ASSIGNOP AND OR NOT IF ELSE FOR WHILE CONTINUE BREAK RETURN

%left ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV MOD
%left AUTOPLUS AUTOMINUS
%right UMINUS NOT

%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE

%%

program: ExtDefList    {printf("CompUnit\n"); display($1,3); }     /*显示语法树,语义分析semantic_Analysis0($1);*/
         ; 
ExtDefList: {$$=NULL;}
          | ExtDef ExtDefList {$$=mknode(EXT_DEF_LIST,$1,$2,NULL,yylineno);}   //每一个EXTDEFLIST的结点，其第1棵子树对应一个外部变量声明或函数
          ;  
ExtDef:   Specifier ExtDecList SEMI   {$$=mknode(EXT_VAR_DEF,$1,$2,NULL,yylineno);}   //该结点对应一个外部变量声明
         |Specifier FuncDec CompSt    {$$=mknode(FUNC_DEF,$1,$2,$3,yylineno);}         //该结点对应一个函数定义
         | error SEMI   {$$=NULL; }
         ;
Specifier:  TYPE    {$$=mknode(TYPE,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);$$->type=!strcmp($1,"int")?INT:FLOAT;}   
           ;      
ExtDecList:  VarDec      {$$=$1;}       /*每一个EXT_DECLIST的结点，其第一棵子树对应一个变量名(ID类型的结点),第二棵子树对应剩下的外部变量名*/
           | VarDec COMMA ExtDecList {$$=mknode(EXT_DEC_LIST,$1,$3,NULL,yylineno);}
           ;  
VarDec:  ID          {$$=mknode(ID,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);}   //ID结点，标识符符号串存放结点的type_id
         | ID Dim    {$$=mknode(ARR,$2,NULL,NULL,yylineno);strcpy($$->type_id,$1);} // 数组变量引用
         | ID DimDec {$$=mknode(ARR,$2,NULL,NULL,yylineno);strcpy($$->type_id,$1);} // 数组声明/定义，维度只能为整型常量
         ;
DimDec: {$$=NULL;}
        | LB INT RB DimDec {$$=mknode(DIM,$4,NULL,NULL,yylineno);$$->type_int=$2;$$->type=INT;}
        ;
FuncDec: ID LP VarList RP   {$$=mknode(FUNC_DEC,$3,NULL,NULL,yylineno);strcpy($$->type_id,$1);}//函数名存放在$$->type_id
		|ID LP  RP   {$$=mknode(FUNC_DEC,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);}//函数名存放在$$->type_id

        ;  
VarList: ParamDec  {$$=mknode(PARAM_LIST,$1,NULL,NULL,yylineno);}
        | ParamDec COMMA  VarList  {$$=mknode(PARAM_LIST,$1,$3,NULL,yylineno);}
        ;
ParamDec: Specifier VarDec         {$$=mknode(PARAM_DEC,$1,$2,NULL,yylineno);}
         ;

CompSt: LC BlockList RC    {$$=mknode(COMP_STM,$2,$3,NULL,yylineno);}
       ;
BlockList: {$$=NULL; } 
        | BlockItem BlockList {$$=mknode(BLOCK_LIST,$1,$2,NULL,yylineno);}
        ;
BlockItem: DefList {$$=mknode(BLOCK_DEF,$1,NULL,NULL,yylineno);}
        | StmList {$$=mknode(BLOCK_STM,$1,NULL,NULL,yylineno);}
        ;
StmList: {$$=NULL; }  
        | Stmt StmList  {$$=mknode(STM_LIST,$1,$2,NULL,yylineno);}
        ;
Stmt:   Exp SEMI    {$$=mknode(EXP_STMT,$1,NULL,NULL,yylineno);}
      | CompSt      {$$=$1;}      //复合语句结点直接最为语句结点，不再生成新的结点
      | RETURN Exp SEMI   {$$=mknode(RETURN,$2,NULL,NULL,yylineno);}
      | RETURN SEMI {$$=mknode(RETURN,NULL,NULL,NULL,yylineno);} // return;      
      | IF LP Exp RP Stmt %prec LOWER_THEN_ELSE   {$$=mknode(IF_THEN,$3,$5,NULL,yylineno);}
      | IF LP Exp RP Stmt ELSE Stmt   {$$=mknode(IF_THEN_ELSE,$3,$5,$7,yylineno);}
      | WHILE LP Exp RP Stmt {$$=mknode(WHILE,$3,$5,NULL,yylineno);}
      | FOR LP Exp SEMI Exp SEMI Exp RP Stmt {$$=mknode4(FOR,$3,$5,$7,$9,yylineno);} // for (int i = 0; i < 10; ++i)
      | FOR LP SEMI Exp SEMI Exp RP Stmt {$$=mknode(FOR,$4,$6,$8,yylineno);} // for (; i < 10; ++i)
      | FOR LP Exp SEMI SEMI Exp RP Stmt {$$=mknode(FOR,$3,$6,$8,yylineno);} // for (int i = 0; ; ++i) 
      | FOR LP Exp SEMI Exp SEMI RP Stmt {$$=mknode(FOR,$3,$5,$8,yylineno);} // for (int i = 0; i < 10;)
      | FOR LP Exp SEMI SEMI RP Stmt {$$=mknode(FOR,$3,$7,NULL,yylineno);} // for (int i = 0; ;)
      | FOR LP SEMI Exp SEMI RP Stmt {$$=mknode(FOR,$4,$7,NULL,yylineno);} // for (; i < 10;)
      | FOR LP SEMI SEMI Exp RP Stmt {$$=mknode(FOR,$5,$7,NULL,yylineno);} // for (; ; ++i)
      | FOR LP SEMI SEMI RP Stmt {$$=mknode(FOR,$6,NULL,NULL,yylineno);} // for (; ;)
      | CONTINUE SEMI {$$=mknode(CONTINUE,NULL,NULL,NULL,yylineno);}
      | BREAK SEMI {$$=mknode(BREAK,NULL,NULL,NULL,yylineno);}
      ;
  
DefList: {$$=NULL; }
        | Def DefList {$$=mknode(DEF_LIST,$1,$2,NULL,yylineno);}
        ;
Def:    Specifier DecList SEMI {$$=mknode(VAR_DEF,$1,$2,NULL,yylineno);}
        ;
DecList: Dec  {$$=mknode(DEC_LIST,$1,NULL,NULL,yylineno);}
       | Dec COMMA DecList  {$$=mknode(DEC_LIST,$1,$3,NULL,yylineno);}
	   ;
Dec:     VarDec  {$$=$1;}
       | VarDec ASSIGNOP Exp  {$$=mknode(ASSIGNOP,$1,$3,NULL,yylineno);strcpy($$->type_id,"=");}
       ;
Exp:    Exp ASSIGNOP Exp {$$=mknode(ASSIGNOP,$1,$3,NULL,yylineno);strcpy($$->type_id,"=");}//$$结点type_id空置未用，正好存放运算符
      | Exp AND Exp   {$$=mknode(AND,$1,$3,NULL,yylineno);strcpy($$->type_id,"&&");}
      | Exp OR Exp    {$$=mknode(OR,$1,$3,NULL,yylineno);strcpy($$->type_id,"||");}
      | Exp RELOP Exp {$$=mknode(RELOP,$1,$3,NULL,yylineno);strcpy($$->type_id,$2);}  //词法分析关系运算符号自身值保存在$2中
      | Exp PLUS Exp  {$$=mknode(PLUS,$1,$3,NULL,yylineno);strcpy($$->type_id,"+");}
      | Exp MINUS Exp {$$=mknode(MINUS,$1,$3,NULL,yylineno);strcpy($$->type_id,"-");}
      | Exp STAR Exp  {$$=mknode(STAR,$1,$3,NULL,yylineno);strcpy($$->type_id,"*");}
      | Exp DIV Exp   {$$=mknode(DIV,$1,$3,NULL,yylineno);strcpy($$->type_id,"/");}
      | Exp MOD Exp   {$$=mknode(MOD,$1,$3,NULL,yylineno);strcpy($$->type_id,"%");}
      | Exp AUTOPLUS  {$$=mknode(AUTOPLUS,$1,NULL,NULL,yylineno);strcpy($$->type_id,"++");}
      | Exp AUTOMINUS {$$=mknode(AUTOMINUS,$1,NULL,NULL,yylineno);strcpy($$->type_id,"--");}
      | LP Exp RP     {$$=$2;}
      | MINUS Exp %prec UMINUS   {$$=mknode(UMINUS,$2,NULL,NULL,yylineno);strcpy($$->type_id,"-");}
      | NOT Exp       {$$=mknode(NOT,$2,NULL,NULL,yylineno);strcpy($$->type_id,"!");}
      | ID LP Args RP {$$=mknode(FUNC_CALL,$3,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
      | ID LP RP      {$$=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
      | ID            {$$=mknode(ID,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
      | ID Dim        {$$=mknode(ARR,$2,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
      | INT           {$$=mknode(INT,NULL,NULL,NULL,yylineno);$$->type_int=$1;$$->type=INT;}
      | FLOAT         {$$=mknode(FLOAT,NULL,NULL,NULL,yylineno);$$->type_float=$1;$$->type=FLOAT;}
      ;
Args:    Exp COMMA Args    {$$=mknode(ARGS,$1,$3,NULL,yylineno);}
       | Exp               {$$=mknode(ARGS,$1,NULL,NULL,yylineno);}
       ;
Dim:    {$$=NULL;}
        | LB INT RB Dim {$$=mknode(DIM,$4,NULL,NULL,yylineno);$$->type_int=$2;$$->type=INT;}
        | LB ID RB Dim {$$=mknode(DIM,$4,NULL,NULL,yylineno);strcpy($$->type_id,$2);$$->type=TYPE;}
        ;       
%%
// char* filename;
int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;

        /*
        char ch;
        while ((ch=getc(yyin))!=EOF) putchar(ch);
        */

        strcpy(filename, strrchr(argv[1], '/') + 1);

	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "%s:%d line, %d column ", filename, yylloc.first_line, yylloc.first_column);
//     fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	
