#include <stdio.h>

int main(){
	int n;
	bool big=false, special=false, weird=false, scary=false;
	printf("Enter number n: ");
	scanf("%d", &n);
	if (n%15==0)
		special = true;
	if (n>999)
		big = true;
	if (n%5==0 && n%6==0 && n%18!=0)
		weird = true;
	if (big || weird)
		scary = true;
	if (special)
		if (scary)
			printf("Number %d is special and scary.", n);
		else
			printf("Number %d is special but not scary.", n);
	if (!special)
		if (scary)
			printf("Number %d is not special but scary.", n);			
		else
			printf("Number %d is not special and not scary.", n);
		
	
		
	return 0;
}
