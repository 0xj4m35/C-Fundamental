/*
 * My Library
 * Creator: Nguyen Thai Bao
 *
 */


#include <math.h>

//	Swap two integer numbers
void swap(int *fNum, int *sNum);

//	greatest common divisor of two integer numbers
int gre_com_div(int fNum, int sNum);

//	Least Common Multiple
int lea_com_mul(int fNum, int sNum);

//	Find Max
int max(int fNum, int sNum);

//	Find Min
int min( int fNum, int sNum);

// 	Is a Number a Prime?
bool isPrime(int num);

//	Display the Array from 0 to size-1
void display_Array( int array[], int size);

//	Insert a new Array
void ins_Array( int array[], int *size);

//	Add an implement in a position in an Array
void ins_imp_arr(int array[], int *size, int imp, int pos);

//	Delete an implement in a position in an Array
void del_imp_arr(int array[], int *size, int pos);

//	Quick Sort
void quick_Sort(int array[], int pos_1, int pos_2);




/* --------------------------------------------------------------------------*/

// 	My Functions:

void swap(int *fNum, int *sNum){
	int tmp = *fNum;
	*fNum = *sNum;
	*sNum = tmp;
}


int gre_com_div(int fNum, int sNum){
	return (sNum == 0)? fNum : gre_com_div(sNum , fNum%sNum);
}


int lea_com_mul(int fNum, int sNum){
	return (fNum*sNum)/gre_com_div(fNum, sNum);
}


int max(int fNum, int sNum){
	return (fNum>sNum)? fNum:sNum;
}


int min( int fNum, int sNum){
	return (fNum<sNum)? fNum:sNum;
}


bool isPrime(int num){
	if ( num < 2) 
		return false;
	for (int i = 2; i <= sqrt(num); i++ )
		if (num % i == 0)
			return false;
	return true;
}


void display_Array( int array[], int size){
	for ( int i = 0; i < size; i++){
		printf("Array[%d] = %8d\t", i, array[i]);
		if (i % 5 == 4 )
			printf("\n");		
	}	
}


void ins_Array( int array[], int *size){
	printf("Please enter the size of Array: ");
	scanf("%d", size);
	for( int i = 0; i<*size; i++){
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}


void ins_imp_arr(int array[], int *size, int imp, int pos){
	for ( int i = *size-1; i >= pos-1; i--)
		array[i+1] = array[i];
	array[pos-1] = imp;
	*size += 1;
}


void del_imp_arr(int array[], int *size, int pos){
	for ( int i = pos-1; i < *size-1; i++)
		array[i] = array[i+1];
	*size -= 1;
}


void quick_Sort(int array[], int pos_1, int pos_2){
	int i = pos_1, j = pos_2, key = array[(pos_1 + pos_2)/2];
	while (i <= j){
		while (array[i] < key)
			i++;
		while (array[j] > key)
			j--;
		if ( i <= j) {
			if (i < j)
				swap(&array[i], &array[j]);
			i++;
			j--;
		}		
	}
	if (pos_1 < j)
		quick_Sort(array, pos_1, j);
	if (pos_2 > i)
		quick_Sort(array, i, pos_2);
}
