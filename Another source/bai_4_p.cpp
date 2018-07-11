#include <stdio.h>

int main(){
	int a, b, choice;
	float c;
	printf("\tMENU\n1.	Enter two integers\n2.	Calculate sum of two given integers\n3.	Calculate subtraction of two given integers\n4.	Calculate multiply of two given integers\n5.	Calculate division of two given integers\n6.      Exit");
	do{	
		printf("\nEnter choice: ");
		scanf("%d", &choice);
	 	switch(choice){
			case 1: 
				printf("1.  Enter two integers: A & B : ");
				scanf("%d%d", &a, &b);
				break;
			case 2:
				printf("2.  Sum of two given integers: %d", a+b);
				break;
			case 3:
				printf("3.  Subtraction of two given integers: %d", a-b);
				break;
			case 4:
				printf("4.  Multiply of two given integers: %d", a*b);
				break;
			case 5:
				c= (float)a/b;
				printf("5.	Division of two given integers: %f", c);
				break;
			default: break;
		}
	} while (choice!=6);
	return (0);
}
