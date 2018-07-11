#include <stdio.h>

int ucln(int a, int b){
	 return (b==0)? a:ucln(b, a%b);
}

int main(){
	int a, b, x;
	scanf("%d%d", &a, &b);	
	x = ucln( a, b);
	printf("\n%d / %d   =   %d / %d",a , b, a/x, b/x);
	return 0;
}
