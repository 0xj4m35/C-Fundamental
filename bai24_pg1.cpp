#include <stdio.h>

void count(int m, int *sum, int *dgit){
	int x=0, y=0, tmp;
	while (m!=0){
		tmp = m%10;
		x += tmp;
		y++;
		m /= 10;
	} 
	*sum = x;
	*dgit = y;
}

int main(){
	int m, x, y, maxNum=0, maxSum=0, numD=0, numS=0;
	do {
		x=0;
		y=0;
		scanf("%d", &m);
		count(m, &x, &y);
		if ( x > maxSum){
			maxSum =x;
			numS = m;
		}
		if ( y > maxNum){
			maxNum = y;
			numD = m;
		}
	} while ( m != 0);
	printf("Max Sum = %d \t Num: %d\n", maxSum, numS);
	printf("Max Digit = %d \t Num: %d\n", maxNum, numD);
	return 0;
}
