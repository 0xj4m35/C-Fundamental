#include <stdio.h>

int main(){
	int a, b, c;
	bool ng=false;
	scanf ("%d%d%d", &a, &b, &c);
	for( int x =1; x<c; x++ )
		for ( int y=1; y<c; y++)
			if (a*x + b*y == c){
				printf("\t%d\t%d\n", x, y);
				ng = true;
			}
	if (!ng)
		printf("Khong co nghiem nguyen duong.");
	return 0;				
}
