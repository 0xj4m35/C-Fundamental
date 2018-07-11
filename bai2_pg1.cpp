#include <stdio.h>

int main(){
	float x, y;
	printf("Enter M(x,y) = ");
	scanf("%f%f", &x, &y);
	if (x>0) 
		if (y>0) 
			printf ("M( %.2f , %.2f ) is at I", x, y);
		else
			if (y==0)
				printf ("M( %.2f , %.2f ) is at 0x", x, y);
			else
				printf ("M( %.2f , %.2f ) is at IV", x, y);
	else 
		if (x < 0) 
			if (y>0) 
				printf ("M( %.2f , %.2f ) is at II", x, y);
			else
				if (y==0)
					printf ("M( %.2f , %.2f ) is at 0x", x, y);
				else
					printf ("M( %.2f , %.2f ) is at III", x, y);
		else
			if (y!=0)
				printf ("M( %.2f , %.2f ) is at 0y", x, y);
			else
				printf ("M( %.2f , %.2f ) is Origin", x, y);
	return 0;
}
