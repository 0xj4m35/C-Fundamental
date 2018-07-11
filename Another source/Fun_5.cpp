#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int *size){
	printf("Size = ");
	scanf("%d", &*size);
	for (int i=0; i<*size; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


void xuatMang(int a[], int size){
	int count=0;
	for(int i=0; i<size; i++){
		printf("%6d", a[i]);
		count++;		
		if (count > 5) {
			printf("\n");
			count=0;
		}
	}	
}

int findMax(int a[], int size){
	int max = -2147483648;
	for (int i=0; i<size; i++)
		if((a[i]<0) && (a[i]>max))
			max = a[i];
	return(max);
}

int findMin(int a[], int size){
	int min = 2147483647;
	for (int i=0; i<size; i++)
		if((a[i]>0) && (a[i]<min))
			min = a[i];
	return(min);
}


int isPrime(int x){
	if (x<2)
		return(0);
	for (int i=2; i<=(int)sqrt(x); i++)
		if (x%i==0)
			return(0);
	return(1);
}

int isSquare(int x){
	if (x<1)
		return(0);
	int y=(int)sqrt(x);
	if (y*y==x)
		return(1);
	else 
		return(0);
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int a[], int size){
	for (int i=0; i<size-1; i++)
		for (int j=i+1; j<size; j++)
			if (a[i] < a[j])
				swap(&a[i], &a[j]);
}

int main(){
	int a[50], size, choice;
	int minP, maxN, count, count1;
	printf("1.  Enter the size and integer array from the keyboard.\n");
	printf("2.	Display array to the screen.\n ");
	printf("3.	Find and display to the screen min positive and max negative number.\n");
	printf("4.	Count square number in the array. Display result to the screen.\n");
	printf("5.	Calculate and display to the screen total prime number in the array.\n");
	printf("6.	Sort array descending and display it after sorting.\n");
	printf("7.	Exit from program.\n");
	
	do{	
		printf("\n\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1: {
				nhapMang(a, &size);
				break;
			}
			case 2: {
				xuatMang(a,size);
				break;
			}
			case 3: {
				minP=findMin(a, size);
				maxN=findMax(a, size);
				if (minP == 2147483647)
					printf("\nDo not have Min Positive");
				else
					printf("\nMin Positive = %d", minP);
				if (maxN == -2147483648)
					printf("\nDo not have Max Negative");
				else
					printf("\nMax Negative = %d", maxN);
				break;
			}
			case 4: {
				printf("\n\tSquare Number\n");
				count=0;
				count1=0;
				for (int i=0; i<size; i++)
					if (isSquare(a[i])==1){
						printf("%6d", a[i]);
						count++;
						count1++;
						if (count > 5){
							printf("\n");
							count=0;
						}
					}
				if (count1==0)
					printf("\nNo square number in the array.");	
				break;
			}
			case 5: {
				count1 =0;
				count=0;
				printf("\n\tPrime Number\n");
				for (int i=0; i<size; i++)
					if (isPrime(a[i]) ==1){
						printf("%10d", a[i]);
						count++;
						count1++;
						if (count > 5){
							printf("\n");
							count=0;
						}
					}
				printf("\n\tTotal Prime Number: %d", count1);
				break;
			}
			case 6: {
				printf("\n\tSort and Display\n");
				sort(a, size);
				xuatMang(a, size);
				break;
			}
			default : break;
		}

	} while (choice != 7);
	
	return(0);
}
