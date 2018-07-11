#include <stdio.h>

int main(){
	int x, n;
	scanf("%d%d", &x, &n);
	float tong=1, sh=1;	
	for (int i=1; i<=n; i++){
		sh *= (float)x/i;
		tong += sh;
	}
	printf("%f", tong);
}
