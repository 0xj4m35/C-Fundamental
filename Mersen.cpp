#include <stdio.h>
#include <math.h>

bool isPrime(int a){
	if (a < 2)
		return false;
	for ( int i = 2; i <= (int)sqrt(a); i++)
		if (a%i == 0) 
			return false;
	return true;
}


int main(){
	int n, i= 2;
	scanf("%d", &n);
	
	do {
		if (isPrime(i))
			if (pow(2,i)-1 <= n)
				printf("%.0lf\n", pow(2,i)-1);
		i++;
	} while (pow(2, i)-1 <= n);
	return 0;
}
