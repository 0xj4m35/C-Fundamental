#include <stdio.h>

int main(){
	int i, n;
	double s=0;
	printf("Enter Number N = ");
	scanf("%d", &n);
	for ( i=1; i<=n; i++){
		s = s + (double)1/i;
	}	
	printf("Result S = %lf", s);
	return(0);
}
