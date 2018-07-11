#include <stdio.h>

int main(){
	int n, i, s=0, s1=0, s2=0;
	printf("Enter Number N = ");
	scanf("%d",&n);
	for( i=1; i<=n; i++){
		if ( i%2 == 0 ) {
			s2 = s2 + i;
		} else{
			s1 = s1 + i;
		}
		s = s + i;
	}
	printf("\nRESULT\nS = %d\nS1 = %d\nS2 = %d", s, s1, s2);
	return(0);
}
