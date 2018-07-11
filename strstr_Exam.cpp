#include <stdio.h>
#include <string.h>


int main(){
	char s[30]="axxxabcxxxxabcDCV";
	char c[15]="abc";
	char *res;
	res = strstr(s,c);
   	printf("Chuoi con la: %s\n", res);
   	


	return 0;
}

