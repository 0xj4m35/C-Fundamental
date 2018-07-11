#include <stdio.h>
#include <math.h>

int isLeap(int k) {
	if (((k%4 == 0) && (k%100 != 0)) || (k%400 == 0)) 
		return 1;
	return 0;
}

int main(){
	int y, m;
	char c;
	do{
		printf("Enter Year :");
		scanf("%d",&y);
		printf("Enter Month : ");
		scanf("%d",&m);
	
		if (m==2){

			if (isLeap(y) == 1) 
				m=29;
			else 
				m=28;
		}
		
		if ( (m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12) ) 
			m=31;
		else 
			if ((m!=28) && (m!=29)) 
				m=30;			
		
		printf("Day of Month : %d\n",m);
		printf("Do you want to continue? (press Y) : ");
		fflush(stdin);
		scanf("%c",&c);
	} while ((c=='y') || (c=='Y'));
}
