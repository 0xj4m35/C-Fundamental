#include <stdio.h>

int main(){
	double n, t, m;
	int k;
	printf("Nhap lai suat, so tien nhan, so thang gui : ");
	scanf("%lf%lf%d", &t, &m, &k);
	n=m;
	for (int i = k; i>0; i--){
		n = n /(1+t);		
	}
	printf("$ %.4lf", n);
	return 0;
}
