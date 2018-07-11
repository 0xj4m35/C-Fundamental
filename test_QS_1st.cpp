#include <stdio.h>
	int count = 0;
void swap(int &a, int &b){
	int t = a;
	a=b;
	b=t;
}

int par(int a[], int l, int r){
	int i, j,p;
	i = l; 

	count ++;
	j = r+1;
	p = a[l];
	while (i < j){
		i++;
		while (i <= r && a[i] <p)
			i++;
		j--;
		while (j >= l && a[j] > p)
			j--;
		swap(a[i], a[j]);
	
	}
	swap(a[i], a[j]);
	swap(a[j], a[l]);

	if(count == 1){
		for (int x=0 ; x<11; x++)
			printf("%4d", a[x]);
		printf("\n\n");
	}

}

void qic(int a[], int l, int r){
	int pivot;
	if (l<r){
		pivot = par(a, l, r);
		if (l<pivot)
			qic(a, l, pivot-1);
		if (r>pivot)
			qic(a, pivot+1, r);
	}
}


int main(){
	int a[11] = {30,19,24,28,41,34,15,43,20,12,36};
	qic(a, 0, 10);
	return 0;
}

