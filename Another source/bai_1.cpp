#include <stdio.h>

int main(){
	int a, b, c, max;
	printf("Enter Numbers \nA = ");
	scanf("%d", &a);
	printf("B = ");
	scanf("%d", &b);
	printf("C = ");
	scanf("%d", &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("Max = %d", max);
	return(0);
}
