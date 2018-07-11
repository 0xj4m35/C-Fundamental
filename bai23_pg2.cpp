#include <stdio.h>

int main(){
	int a,b,x;
	float z;
	char c;
	printf("Enter a, b, c: ");
	scanf("%d%d", &a, &b);
	fflush(stdin);]
	scanf("%c", &c);
	switch (c){
		case '+': 
			x = a + b;
			printf("Day la phep cong, %d + %d = %d", a, b, x);
			break;
		case '-':
			x = a - b;
			printf("Day la phep tru, %d - %d = %d", a, b, x);
			break;
		case '*':
			x = a * b;
			printf("Day la phep nhan, %d * %d = %d", a, b, x);
			break;
		case '/':
			if (b!=0){
				z = (float)a/b;
				printf("Day la phep chia, %d / %d = %.2f", a, b, z);
			} else 
				printf("Day la phep chia nhung khong the chia vi b = 0");
			break;
		default :
			printf("Khong phai la phep toan.");
			break;
	}
	return 0;
}
