#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	char s[250];
	char c;
	int count=0, n, a[123],tmp;
	printf("Nhap 1 sau ki tu: ");
	gets(s);
	printf("Nhap 1 chu cai: ");
	fflush(stdin);
	scanf("%c", &c);
	tmp= strlen(s);
	for (int i=0; i< tmp; i++)
		if (s[i] == c)
			count++;
	printf("so lan xuat hien: %d", count);
	printf("\n nhap vao so n = ");
	scanf("%d", &n);
	for (int i=0; i<=122; i++)
		a[i]==0;
	for (int i =0; i < tmp; i++ )
		a[int(s[i])-48]++;
		
	for (int i=65; i<=122; i++)
		if (a[i]!=0) {
			c==str(i);
			c==strupr(c);
			printf("%c", c);
			
			
		}
			
}
