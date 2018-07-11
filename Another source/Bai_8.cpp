#include <stdio.h>

int main(){
	int n, i, count=0;
	printf("Enter Number N = ");
	scanf("%d",&n);
	for( i=1; i<=n; i++){
		if (i%3==1) 
			count+=1;
	}
	printf("Have %d Number(s) suitable.", count);
	return(0);
}
