#include <stdio.h>
#include <math.h>

int isPrime(int k){
	if (k<2)
		return 0;
	for (int i=2; i <= (int)sqrt(k); i++)
		if ( k % i == 0 )
			return 0;	 
	return 1;
}

int main(){
	char c;
	do {
		printf("Enter N = ");
		int n;
		scanf("%d",&n);
		if ( isPrime(n) == 1 )
			printf("\t%d is a Prime!\n",n);
		else
			printf("\t%d is not a Prime!\n",n);
			
		printf("Do you want to continue? (Y/N): ");
		fflush(stdin);
		scanf("%c",&c);
	} while ((c == 'Y') || (c == 'y'));
}
