#include <stdio.h>


// 		Import Array

void	impArray(int a[], int *size){
	printf("\tIMPORT ARRAY\n Length of Array: Size = ");
	scanf("%d", size);
	for (int i=0; i<*size; i++){
		printf("Array[%d] = ", i);
		scanf("%d", &a[i]);
	}
	putchar('\n');
}


// 		Export Array

void	expArray(int a[], int size){
	printf("\tEXPORT ARRAY\n");
	for (int i=0; i<size; i++){
		printf("Array[%d] = %d\n", i, a[i]);
	}
	putchar('\n');
}


// 		Swap

void	swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}


// 		Quick Sort

void 	qSort(int a[], int l, int r){
	int right=r, left=l;
	int key=a[(right+left)/2];
	while (left <= right) {
		while (a[left]<key) 
			left+=1;
		while (a[right]>key)
			right-=1;
		if (right >= left){
			if (right>left)
				swap( &a[left], &a[right]);
			left+=1;
			right-=1;
		}
	}	
	if (l < right) qSort( a, l, right);
	if (left < r) qSort( a, left, r);
}

int main(){
	int a[50], n;
	impArray(a,&n);
	expArray(a,n);
	qSort( a, 0, n-1);
	printf("\tQuick Sort\n");
	expArray(a, n);
	return 0;
}

