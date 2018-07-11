#include <stdio.h>

void nhapMang(int a[], int *size){
	printf("Nhap Size Mang: ");
	scanf("%d", size);
	for ( int i=0; i< *size; i++){
		printf("[%d] = ", i);
		scanf("%d",&a[i]);
	}
	putchar('\n');
}

void xuatMang(int a[], int size){
	for (int i=0; i<size; i++)
		printf("%d\t", a[i]);
	putchar('\n');
}

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void bubbleSort(int a[], int size){
	for ( int i=0; i<size-1; i++)
		for ( int j=size-1; j>i; j--)
			if (a[i]>a[j])
				swap(&a[i],&a[j]);
}

int main(){
	int a[100],size;
	nhapMang(a,&size);
	xuatMang(a,size);
	bubbleSort(a,size);
	xuatMang(a,size);
}
