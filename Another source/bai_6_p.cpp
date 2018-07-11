#include <stdio.h>

int main(){
	int a[100], size;
	char c;
	do{
		int first=-1, last=-1;
		printf("Number of Integers: ");
		scanf("%d", &size);
		for (int i=0; i<size; i++){
			printf("A[%d] = ", i);
			scanf("%d", &a[i]);
		}
		for (int i=0; i<size; i++){
			if (a[i]==24){
				first=i;
				break;
			}
		}
		if (first!=-1){
			for (int i=size-1; i>=0; i-- ){
				if (a[i]==24){
					last=i;
					break;
				}
			}
		}
		if (first==-1)
			printf("The number < 24 > is not found.");
		else
			printf("First and Last index of number < 24 >:   %d    %d", first+1, last+1);
		printf("\n\nAnother Program? <Y/N> : ");
		scanf("%s", &c);
	} while ((c=='Y') || (c=='y'));
	return(0);
}
