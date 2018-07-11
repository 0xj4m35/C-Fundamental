#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}

void nhapMang( int a[100][100], int *row, int *column){
	printf("Row & Column:  ");
	scanf("%d%d", &*row, &*column);
	for (int i=0; i<*row; i++)
		for (int j=0; j<*column; j++){
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}	
}

void xuatMang(int a[100][100], int row, int column){
	printf("\n\n");
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++)
		 	printf("A[%d][%d] = %6d\t", i, j, a[i][j]); 
		printf("\n");
	}
}

void sort(int a[100][100], int row, int column){
	for (int i=0; i<column; i++)
		for (int u=0; u<row-1; u++)
			for (int v=u+1; v<row; v++)
				if (a[u][i] > a[v][i])
					swap(&a[u][i], &a[v][i]);
}

int sumArr(int a[100][100], int row, int column){
	int sum=0;
	for (int i=0; i<row; i++)
		for (int j=0; j<column; j++)
			if (a[i][j]%2==0)
				sum+=a[i][j];
	return(sum);
}

int main(){
	int a[100][100];
	int n, m;
	nhapMang(a, &n, &m);
	xuatMang(a, n, m);
	sort(a, n, m);
	xuatMang(a, n ,m);
	printf("\nCaculate all even elements of Array = %d", sumArr(a, n, m));
	return(0);
}
