#include <stdio.h>

int main(){
	int 	num, occMax=0, occMin=0, max=-32768, min=32767, i=0;
	
	do{
		i++;
		printf("Number[%d] = ", i);
		scanf("%d", &num);
		if (num==0)
			break;
		else {
			if (num > max) {
				max = num;
				occMax=1;
			} else 
				if (num == max)
					occMax++;
			if ( num < min){
				min = num;
				occMin=1;
			} else
				if ( num == min)
					occMin++;
		}	
	} while (num!=0);
	
	if (i==1)
		printf("No Number Entered.");
	else {
		printf("\n\nMax = %d", max);
		printf("\nOccurance Max = %d", occMax);
		printf("\n\nMin = %d", min);
		printf("\nOccurance Min = %d", occMin);
	}
	
	return(0);
}
