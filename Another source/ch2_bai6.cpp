#include <stdio.h>

void chuanHoaArray(int a[], int *size){
	int j,i = 0;
	while (i < *size-1){
		j = i+1;
		while (j < *size){
			if (a[i] == a[j]){
				for (int k = j; k<*size ; k++)
					a[k]= a[k+1];
				*size -= 1;					
			}
			else 
				j +=1;
		}
		i++;
	}
}
int main(){
	int a[100], size;
	scanf("%d", &size);
	for (int i = 0; i <size; i++){
		scanf("%d", &a[i]);
	}
	chuanHoaArray(a, &size);
	for (int i =0; i<size; i++)
			printf("%d\t", a[i]);
	return 0;
}
