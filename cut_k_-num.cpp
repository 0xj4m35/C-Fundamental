#include <stdio.h>

void split(int a[], int &size, int n){
	size=0;
	while(n != 0){
		a[size++] = n%10;
		n/=10;
	}
}

int findCut(int a[], int size, int k){
	int i;
	for (i=size-1; i>=k; i--)
		if (a[i] < a[i-k])
			return i;
	return k-1;
}

int newNum(int a[], int size, int pos, int k){
	int sum=0;
	for (int j=size-1; j>=0; j--){
		if ((j > pos) || (j < pos-k+1))
			sum = sum*10 + a[j];
	}
	return sum;
}

int main(){
	int n;
	int  a[100], size, k;
	scanf("%d%d", &n, &k);
	split(a, size, n);
	int x = findCut(a, size, k);
	n = newNum(a, size, x, k);
	printf("%d", n);
	return 0;
}

