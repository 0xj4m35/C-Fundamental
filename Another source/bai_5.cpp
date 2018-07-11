#include <stdio.h>

int main(){
	int n, i, sum=0;
	printf("Enter Number N = ");
	scanf("%d",&n);
	for( i=1; i<=n; i++){
		if ( i%7 == 0 ) 
			sum = sum+i;
	}
	printf("\nSUM = %d", sum);
	return(0);
}
