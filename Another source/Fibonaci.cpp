#include <stdio.h>
#include <math.h>

void fibo(int k){
	
	int fibo_1 = 1, fibo_2 = 0, fibo_0;
	
	if (k==1)
		printf("%5d",fibo_2);
		
	if (k==2){
		printf("%5d",fibo_2);
		printf("%5d",fibo_1);
    }
    
    if (k>=3){
    	printf("%5d",fibo_2);
		printf("%5d",fibo_1);
		
		for (int i=3; i <= k; i++){
			fibo_0 = fibo_2 + fibo_1;
			fibo_2 = fibo_1;
			fibo_1 = fibo_0;
			printf("%5d",fibo_0);
		}
	}
}

int main(){
	printf("The Number of Fibonaci: ");
	int n;
	scanf("%d",&n);
	fibo(n);
	return 0;
}
	

