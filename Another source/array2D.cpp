#include <stdio.h>

int main(){
	int row,col;
	printf("Row = ");
	scanf("%d", &row);
	printf("Column = ");
	scanf("%d", &col);
	int a[row][col];
	printf("\n\tInsert Array 2D\n");
	for ( int i=0; i<row; i++){
		for ( int j=0; j<col; j++){
			printf("Array [%d] [%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	putchar('\n');
	
	int count=0;
	printf("\tExport Array\n");
	for ( int i=0; i<row; i++){
		for ( int j=0; j<col; j++){
			printf("%5d", a[i][j]);
			count++;
		}
		if (count==col){
			putchar('\n');
			count=0;
		}
	}
	
	int sum;
	printf("\n\tSum of Row\n");
	for ( int i=0; i<row; i++){
		sum=0;
		for ( int j=0; j<col; j++){
			sum+=a[i][j];
		}
		printf("%d\n", sum);
		
	}
}
