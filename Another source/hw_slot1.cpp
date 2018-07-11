#include <stdio.h>

int main(){
	double len, wid, rad, pi=3.14;
	printf("\tRectangle\n");
	do {
		printf("Enter length: ");
		scanf("%lf", &len);
		if (len<=0)
		printf("ERROR! Please enter again.\n");
	} while (len<=0);
	
	do {
		printf("Enter width: ");
		scanf("%lf", &wid);
		if (wid<=0)
		printf("ERROR! Please enter again.\n");
	} while (wid<=0);
	
	printf("\nPerimeter: %.2lf\nAcreage: %.2lf\n", (len+wid)*2, len*wid);
	
	printf("\n\tCircle\n");
	do {
		printf("Enter radius: ");
		scanf("%lf", &rad);
		if (rad<=0)
		printf("ERROR! Please enter again.\n");
	} while (rad<=0);
	
	printf("\nPerimeter: %.2lf\nAcreage: %.2lf\n", rad*2*pi, rad*rad*pi);
	return 0;
}
