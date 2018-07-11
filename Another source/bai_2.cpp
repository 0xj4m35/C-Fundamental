#include <stdio.h>

int main(){
	int x, y, i;
	double t=1;
	printf("Enter Number X, Y\nX = ");
	scanf("%d", &x);
	printf("Y = ");
	scanf("%d", &y);
	for ( i=1; i<=y; i++){
		t = t*x;
	}
	printf("RESULT\n%d^%d = %.0lf", x, y, t);
}
