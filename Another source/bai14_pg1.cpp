#include <stdio.h>

int ucln(int a, int b){
	 return (b==0)? a:ucln(b, a%b);
}

int bcnn( int a, int b){
	return (a*b/ucln(a,b));
}

void ps_tg(int a, int b){
	int tmp = ucln(a, b);
	printf("%d / %d\n", a/tmp, b/tmp);
}

void sum (int a, int b, int c, int d){
	int tmp = bcnn(b,d);
	int x = a*(tmp/b) + c*(tmp/d), y = tmp;
	printf("%d / %d  +  %d / %d  =  ", a, b, c, d );
	ps_tg(x, y);
}

void sub (int a, int b, int c, int d){
	int tmp = bcnn(b,d);
	int x = a*(tmp/b) - c*(tmp/d), y = tmp;
//	if (( x>0 && y<0) || ( x<0 && y<0)) {
//		x*=-1;
//		y*=-1;
//	}
	printf("%d / %d  -  %d / %d  =  ", a, b, c, d );
	ps_tg(x, y);
}

void mul (int a, int b, int c, int d){
	int x= a*c, y= b*d;
	printf("%d / %d  *  %d / %d  =  ", a, b, c, d );	
	ps_tg(x,y);
}

void de(int a, int b, int c, int d){
	int x= a*d, y=b*c;
	printf("%d / %d  /  %d / %d  =  ", a, b, c, d );
	ps_tg(x, y);	
}

int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);	
	sum(a, b, c, d);
	sub(a, b, c, d);
	mul(a, b, c, d);
	de(a, b, c, d);
	return 0;
}
