result:sysy.y sysy.l def.h ast.c
	flex sysy.l
	bison -d sysy.y
	gcc -o parser lex.yy.c sysy.tab.c ast.c