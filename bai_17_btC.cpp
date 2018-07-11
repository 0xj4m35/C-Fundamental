#include <stdio.h>

void rowPascal(int a[], int size){
	a[size+1] = 1;
	for (int v=size; v>0; v--){
		a[v]= a[v] + a[v-1];
	}
}

void display(int a[], int size){
	for (int i=0; i<size; i++)
		printf("%d   ", a[i]);
	printf("\n");
}

int main(){
	int a[100], size=2, m;
	scanf("%d", &m);
	a[0] = 1;
	a[1] = 1;
	if (m == 1)
		printf("1");
	else
		if ( m == 2)
			printf("1\n1   1");
		else{
			printf("1\n1   1\n");
			for (int i=2; i<m; i++ ){
				rowPascal(a, i-1);
				display(a, i+1);
			}
		}
	return 0;
}
