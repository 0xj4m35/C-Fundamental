#include <stdio.h>
#include <math.h>

void find(int a[], int size, int *minn, int *flag){
	int sum1, sum2;
	*minn = 100000000;
	for ( int i = 0; i<size-1; i++){
		sum1 = 0;
		sum2=0;
		for (int u=0; u<=i; u++){
			sum1+=a[u];
		}
		for (int v=i+1; v< size; v++)
			sum2+=a[v];
		if (abs(sum1-sum2) < *minn){
			*flag = i;
			*minn = abs(sum1-sum2);
		}
	}
}

int main(){
	int a[100], size, min, flag;
	scanf("%d", &size);
	for(int i=0; i<size; i++)
		scanf("%d", &a[i]);
	find(a, size, &min, &flag);
	printf("%d\t%d", min, flag);
	return 0;
}
