#include <stdio.h>
#include <math.h>

double factorial(int k) {
	if (k < 1) 
		return 0;
	double t=1;
	for ( int i=1; i <= k; i++)
		t*=i;
	return t;
}

int main(){
	int n;
	double x;
	char c;
	do{
		printf("Enter N = ");
		scanf("%d",&n);
		x = factorial(n);
		if (x == 0)
			printf("Not Correct Number!\n");
		else
			printf("%d! = %0.0lf\n", n, x);
		
		printf("Do you want to continue? ( press Y ) : ");
		fflush(stdin);
		scanf("%c",&c);
	} while ((c=='y') || (c=='Y'));
}
