#include <stdio.h>
#include <math.h>
int a, b, c, min, max;

void insInt(){
	printf("Nhap 3 so nguyen : ");
	scanf("%d%d%d", &a, &b, &c);
}

int findMax(int a, int b){
	if (a > b)
		return(a);
	else
		return(b);
}

int findMin(int a, int b){
	if (a > b)
		return(b);
	else
		return(a);
}

void findMaxMin(){
	min = findMin( findMin(a,b) , c);
	max = findMax( findMax(a,b) , c);
	printf("\n\tMax = %d \n\tMin = %d", max, min);
}

void minusSquare(){
	double minS=max*max-min*min;
	printf("\n\tMinus = %.0lf", minS);
}

void divisor(){
	printf("\n\tDivisors : ");
	for (int i=1; i<=max; i++)
		if ((a%i==0) && (b%i==0) && (c%i==0))
			printf("%d\t", i);
}

int main(){
	insInt();
	findMaxMin();
	minusSquare();
	divisor();
}
