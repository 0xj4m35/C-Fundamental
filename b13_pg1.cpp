#include <stdio.h>

void ins_Array( int array[], int &size){
	printf("Please enter the size of Array: ");
	scanf("%d", &size);
	for( int i = 0; i<size; i++){
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

void display_Array( int array[], int size){
	for ( int i = 0; i < size; i++)
		printf("%8d\t", array[i]);			
}


void process(int A1[], int n){
	int A2[100];
	
	// Duyet mang nay: Lam voi so <0 truoc
	int size=0;
	for (int i=0; i<n; i++)
		if (A1[i] < 0){
			A2[size] = A1[i];
			size ++;
		}
	
	// phan tu =0:
	for (int i=0; i<n; i++)
		if (A1[i] == 0){
			A2[size] = A1[i];
			size ++;
		}
				
	// phan tu >0:	
	for (int i=0; i<n; i++)
		if (A1[i] > 0){
			A2[size] = A1[i];
			size ++;
		}
	
	// export ra mang A1:
	for (int i=0; i<n; i++)
		A1[i] = A2[i];
}



int main(){
	int A1[100], n;
	ins_Array(A1, n);
	process(A1, n);
	printf("\nAfter Processing: \n");
	display_Array(A1, n);
	return 0;
}

