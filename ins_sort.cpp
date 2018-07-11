#include <stdio.h>

int main(){
	int a[100], size, x, j;
	scanf("%d", &size);
	for(int i=0; i< size; i++){
		scanf("%d", &a[i]);
	}
	
	for ( int i=1; i< size; i++){
		if (a[i] < a[i-1]){
			x = a[i];
			j =i;
			while ((x < a[j-1]) && (j>0)){
				a[j]=a[j-1];
				j--;				
			}
			a[j] = x;
		}
	}
	for (int i =0 ; i<size; i++)
		printf("%d\t", a[i]);
	return 0;
}
