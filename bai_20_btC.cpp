#include<stdio.h>
#include<string.h>

int main(){
	char s[100], c[100];
	gets(s);
	strcpy(c,s) ;
	strrev(s);
	if(strcmp(c,s) == 0)
		printf("xau doi xung");
	else
		puts(s);
	return 0;
}
