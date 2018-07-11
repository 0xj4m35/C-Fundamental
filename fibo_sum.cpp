#include <stdio.h>

int findFibo(int n){
	int fi_2 =1, fi_1 =1, fi=2;
	if (n==1)
		return 1;
	while (fi <= n){
		fi= fi_2 + fi_1;
		fi_2 = fi_1;
		fi_1 = fi;		
	}
	return fi_2;
}


int main(){
	int n, x;
	scanf("%d", &n);
	while (n != 0){
		x = findFibo(n);
		printf("%d   ", x);
		n -= x;
	}

	return 0;
}

