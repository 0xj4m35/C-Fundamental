#include <stdio.h>

void nhapMang(int a[], int *size){
	printf("Nhap Size Mang: ");
	scanf("%d", size);
	for ( int i=0; i< *size; i++){
		printf("[%d] = ", i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int size){
	for (int i=0; i<size; i++)
		printf("%d\t", a[i]);
}

int findMax(int a[], int size){
	int flag=0, max=a[0];
	for (int i=1; i<size; i++)
		if (max<a[i]){
			max=a[i];
			flag=i;
		}
	return flag;
}

int findMin(int a[], int size){
	int flag=0, min = a[0];
	for (int i=1; i<size; i++)
		if (min>a[i]){
			min=a[i];
			flag=i;
		}
	return flag;
}

//void same(int a[], int size){
//	for (int i=0; i<size-1; i++){
//		for (int j=i+1; j<size; j++)
//			if (a[i] = a[j])
//				printf("\nValue: %d \t Flag: %d & %d", a[i], i, j);	
//	}
//}

void xoa(int a[], int *size, int flag){
	for (int i=flag; i<(*size-1); i++){
		a[i]=a[i+1];
	}
	*size-=1;
}

int findMax2(int a[], int size){
	int flagMax=findMax(a,size), flagMax2=0, max2=a[0];
	int max=a[flagMax];
	for (int i=0; i<size; i++)
		if ((a[i]>max) && (a[i]<a[flagMax])){
			max=a[i];
			flagMax2=i;
		}
	return flagMax2;
}

void chen(int a[], int *size, int flag, int k){
	*size+=1;
	for (int i=*size; i>flag+1; i--)
		a[i]=a[i-1];
	a[flag]=k;
}

int main(){
	int a[10], k, flagMax, flagMin, flagMax2;
	nhapMang(a,&k);
	xuatMang(a,k);
	
	//Tim Max
	flagMax = findMax(a,k);
	printf("\nMax = %d \t FlagMax = %d\n", a[flagMax], flagMax);
	
	//Tim Min
	flagMin = findMin(a,k);
	printf("\nMin = %d \t FlagMin = %d\n", a[flagMin], flagMin);
	
	//Tim so trung nhau
	//same(a,k);
	
	//Xoa Max
	xoa(a,&k,flagMax);
	xuatMang(a,k);
	putchar('\n');
	
	// Xoa Min
	xoa(a,&k,flagMin);
	xuatMang(a,k);
	putchar('\n');
	
	// Tim Max 2
	flagMax2 = findMax2(a,k);
	printf("\nMax2 = %d \t FlagMax2 = %d\n", a[flagMax2], flagMax2);
	
	//Chen
	chen(a,&k,flagMax,50);
	xuatMang(a,k);
	return 0;
}
