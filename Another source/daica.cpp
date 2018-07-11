#include <stdio.h>

int main(){
	int n,m;
	double s=0;
	printf("Enter n = ");
	scanf("%d", &n);
	if (n%2==0)
		m=n-1;
	else
		m=n;
	for( int i=1; i<= m; i+=2){
		s+=(double)1/i;
	}
	
	printf("s = %lf", s);
	return(0);
}
