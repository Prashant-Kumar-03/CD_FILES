/* lex program to count no. of words*/
%{
	#include<stdio.h>
	int wc=0;
/* lc=lines count, sc=space count, tc=tab count, wc=words count, cc=character count;  */
%}

%%
[ \t\n]+ {}
[^ \t\n]+ { wc++; }

%%

int main()
{
	printf("enter the input:\n");
	yylex();
	printf("No. of words is %d", wc);
	return 0;	
}

int yywrap()
{
	return 1;
}