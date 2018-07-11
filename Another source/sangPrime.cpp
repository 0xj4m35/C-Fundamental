#include <stdio.h>
#include <math.h>

void 	sangPrime(int a[], int size){
	int j;
	a[1]=1;
	a[0]=1;
	if (size>=2){
		for (int i=2; i<=(int)sqrt(size); i++){
			if (a[i]=0){
				j=i*i;
				while (j<=size){
					a[j]=1;
					j+=i;
				}				
			}
		}
	}
}

int main(){
	int a[200], size;
	scanf( "%d", &size);
	for (int i=0; i<=size; i++)
		a[i]=0;
	sangPrime( a, size);
	for (int i=0; i<=size; i++)
		if (a[i]=0)
			printf("%d\n", i);
			
}
