#include <stdio.h>
#include <math.h>

double do_sin(double x){
	double sin = x, temp=x;
	int k = -1, i=1;
	while ( fabs(temp) >= 0.000000001){
		temp = temp * x* x / (2*i * (2*i+1));
		i= i+1;
		sin = sin + temp*k;
		k= - k;
	}
	return sin;
}


int main(){
	double x, pi=3.14159265358979;
	scanf("%lf", &x);
	x = x / 180 *pi;
	x = do_sin(x);
	printf("%lf", x);
	return 0;
}


