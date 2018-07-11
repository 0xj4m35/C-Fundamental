// Code by Yasuo

#include <stdio.h>

//	swap

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

// 	Nhap Mang

void insArray(int a[], int *size){
	printf("Size of Array: ");
	scanf("%d", size);
	for (int i=0; i<*size; i++){
		printf("Array[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

//	Xuat Mang

void expArray(int a[], int size){
	for (int i=0; i<size; i++){
		printf("Array[%d] = %d\n", i, a[i]);
	}
}


// 	Quick Sort

void quickSort(int a[], int left, int right){
	int i=left, j=right, tmp;
	int key=a[(i+j)/2];
	while (i <= j){
		while (a[i] < key) 
			i+=1;
		while (a[j] > key)
			j-=1; 
		if (i <= j){
			swap(&a[i], &a[j]);
			i+=1;
			j-=1;
		}
	}
	if(left < j)
		quickSort(a, left, j);
	if(right > i)
		quickSort(a, i, right);
}


int main(){
	int a[100], size;
	insArray(a, &size);
	quickSort(a, 0, size-1);
	expArray(a, size);
	return(0);
}
