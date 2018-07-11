#include <stdio.h>

void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void nhapMang(int a[], int *size){
	printf("Nhap Size Mang: ");
	scanf("%d", size);
	for ( int i=0; i< *size; i++){
		printf("a[%d] = ", i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int size){
	for (int i=0; i<size; i++)
		printf("A[%d] = %d\n", i, a[i]);
}

int main(){
	int a[10], size,sum=0;
	nhapMang(a, &size);
//	printf("Nhap vao size mang: ");
//	scanf("%d",&size);
//	for (int i=0; i<size; i++){
//		printf("a[%d] = ", i);
//		scanf("%d",&a[i]);
//	}
	for (int i=0; i<size; i++){
		sum+=a[i];
	}
	printf("Tong = %d\n",sum);
	
	printf("\tSWAP\nBefore:\n");
	xuatMang(a,2);
//	printf("a[0] = %d \ta[1] = %d\n", a[0], a[1]);
	swap(&a[0],&a[1]);
	printf("After:\n");
	xuatMang(a,2);
//	printf("a[0] = %d \ta[1] = %d", a[0], a[1]);
	
	
	printf("\n\tFind Max:\n");
	int max=a[0],vitri=0;
	for (int i=1; i<size; i++)
		if (max<a[i]){
			max=a[i];
			vitri=i;
		}
	printf("MAX = %d \t VI TRI: A[%d]", max, vitri);
	return 0;
}
