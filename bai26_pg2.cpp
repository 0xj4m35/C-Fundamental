#include <stdio.h>

int main(){
	int n;
	bool ng = false;
	scanf("%d", &n);
	for (int a=1; a <= n; a++)
		for (int b=a; b<=n; b++)
			for( int c=b; c<=n; c++)
				if (a*a + b*b == c*c ) {
					printf("\t%d\t%d\t%d\n", a, b, c);
					ng = true;
				}
	if (!ng)	
		printf("Khong co bo 3 so Pitago. ");
	return 0;			
}
