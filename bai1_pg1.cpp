#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	float p, s;
	printf("Enter a,b,c : ");
	scanf("%f%f%f", &a, &b, &c);
	if (a+b > c && a+c > b && b+c > a) {
		p = (a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("This is a triangle with square = %.2f", s);
	} else 
		printf("This isn't a triangle.");
	return 0;
}
