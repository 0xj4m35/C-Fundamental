#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter Number A, B and C:\n\nA = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	printf("C = ");
	scanf("%d",&c);
	if ((a+b>c) && (a+c>b) && (b+c>a)) {
		printf("\nThis is a triangel.");
	}else{
		printf("\nThis is not a triangle.");
	}
	return(0);
}
