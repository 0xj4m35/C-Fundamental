#include <stdio.h>

int maxAm (int a[], int n){
	int max;
	for (int i=0; i< n; i++ )
		if (a[i] < 0){
			max = a[i];
			break;
		}	
//	if (max < 0){	
		for (int i=0; i<n; i++){
			if((a[i] < 0) && (a[i] > max))
				max= a[i];
		}
		return max;
//	}
//	else
//		return 0;
}

int main(){
	int a[100], n;
	scanf("%d", &n);
	for(int i = 0;i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("MaxAm = %d", maxAm(a,n));
	return 0;
}
