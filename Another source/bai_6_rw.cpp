#include <stdio.h>

int main(){
	int num;
	char c;
	
	do{
		int first=0, last=0, i=0;
		printf("Enter a collection of Integers and finish by number 0\n\n");
		
		
		do{
			i += 1;
			printf("Integer <%d> : ", i);
			scanf("%d", &num);
			if (num==0)
				break;
			else 
				if (num==24){
					if (first==0){
						first=i;
						last=i;
					} else 
						last=i;
				}			
		} while (num!=0);
		
		
		if (first==0)
			printf("Number <24> is not found.");
		else
			printf("First and Last index of number < 24 >:   %d    %d", first, last);
			
			
		printf("\n\nAnother Program? <Y/N> : ");
		scanf("%s", &c);
	} while ((c=='Y') || (c=='y'));
	
	return(0);
}
