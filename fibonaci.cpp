#include <stdio.h>

int fibo(int n){
	int fibo_1 = 1, fibo_2 = 1, fiboo;
	if ( n <= 2)
		return 1;
	else
		for (int i =3; i <=n; i++){
			fiboo = fibo_1 + fibo_2;
			fibo_2 = fibo_1;
			fibo_1 = fiboo;			
		}
	return fiboo;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
