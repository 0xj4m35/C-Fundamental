#include <stdio.h>

void swap(int *a, int *b){
	int x=*a;
	*a=*b;
	*b=x;
}

void sort_dec(int a[], int size){
	for(int i =0; i< size -1; i++)
		for(int j = i+1; j<size; j++)
			if(a[i] < a[j])
				swap(&a[i], &a[j]);
}

int main(){
	int x, a[100], size;
	scanf("%d", &size);
	for (int i=0; i<size; i++){
		scanf("%d", &a[i]);
	}
	sort_dec(a, size);
	scanf("%d", &x);
	
	for (int i = 0; i<size; i++)
		if (a[i] == x){
			printf("\nCo x \n\n");
			break;
		}
	for (int i=0; i<size-1; i++){
		if((a[i]>=x) && (a[i+1]<=x)){
			size++;
			for (int j = size-1; j>= i+1; j--)
				a[j] = a[j-1];
			a[i+1] = x;
			break;
		}
	}
	for(int i=0; i< size; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}
