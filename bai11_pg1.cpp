#include <stdio.h>

int main(){
	int a, b, tmp;
	scanf("%d%d", &a, &b);
	while (b!=0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("%d", a);
}
