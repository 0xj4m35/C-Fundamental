#include <stdio.h>
#include <math.h>

double do_cos(double x){
	double temp = 1, cos = 1;
	int i=0, k =1;
	while ( fabs(temp) >= 0.00000001){
		i = i +1;
		k=-k;
		temp = temp * x*x / (2*i*(2*i-1));
		cos += temp*k;
	}
	return cos;	
}


int main(){
	double x, pi = 3.14159265358979;
	scanf("%lf", &x);
	x = x * pi / 180;
	printf("%lf", do_cos(x));
	return 0;
}

// cos(x) S = 1 - (x^2)/2! + (x^4)/4! -...+ (-1^n)*x^2n/(2n)!
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double S, S1, x, epsi;
//	int n, i;
//	S = 1.0; S1 = 1.0;
//	n = 0;
//	
//	printf("nhap x tu ban phim:");	scanf("%lf", &x);
//	x = (x * 3.1415927)/180;
//	printf("nhap epsi:");  scanf("%lf", &epsi);
//	
//	do
//	{
//		S1 = -S1;
//		S1 *= (x*x)/((n + 1) * (n + 2));
//		S = S + S1; 
//		n = n + 2;
//	}
//	while ( fabs(S1) > epsi);
//
//	printf("tong S: %6.12lf", S);
//	return(0);
//}
