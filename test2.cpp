#include <stdio.h>
#include <string.h>

int main(){
	int a;
	int x=0;
	char s[100];
	while (x!=1){
		x = scanf("%d%[^\n]", &a, s);
		while (getchar() != '\n');
	}
	printf("%d", a);
	return 0;
}
