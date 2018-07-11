#include <stdio.h>

int main(){
	int a, tmp, s=0;
	scanf("%d", &a);
	while (a!=0){
		tmp = a%10;
		printf("%d\n", tmp);
		s += tmp;
		a /= 10;
	}
	printf("%d", s);
	return 0;
}
