#include <stdio.h>
#include "myLib.h"


bool check(int a[], int n, int k){
	bool ch=false;
	int count=0;
	for (int i =0; i<n; i++){
		if (a[i] > 0)
			count ++;
		else
			count = 0;	
		if (count == k){
			ch = true;
			break;
		}			
	}
	return ch;	
}

int main(){
	int arr[100], n, k;
	ins_Array(arr, &n);
	scanf("%d", &k);
	if (check(arr, n, k) )
		printf("Have k ...");
	else
		printf("Not have k...");
	return 0;
}
