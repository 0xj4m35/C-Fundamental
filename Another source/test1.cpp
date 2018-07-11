#include <stdio.h>
#include <math.h>

void findMinMax(int a[], int size, int *min, int *max){
	*min = 1000;
	*max = -1000;
	for (int i=0; i<size; i++){
		if ((a[i]>0) && (a[i] < *min)) 
			*min = a[i];
		if ((a[i]<0) && (a[i] > *max))
			*max = a[i];
	}
}

int main(){
	int a[50], size, minp, maxn;
	scanf("%d", &size);
	for (int i=0; i<size; i++)
		scanf("%d", &a[i]);
	findMinMax(a, size, &minp, &maxn);
	printf("%d\t%d",minp , maxn);
	return(0);
}
