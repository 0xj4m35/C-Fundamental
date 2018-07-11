#include <stdio.h>

int main(){
	int a=20, b=0 , c ,d,e,f;
	c=a<=12;
	d=a>12 && a<=21 && b==1;
	e=a >=65;
	f = ! ( c||d||e);
	printf("%d\n%d\n%d\n%d\n", c,d,e,f);
	return 0;
}
