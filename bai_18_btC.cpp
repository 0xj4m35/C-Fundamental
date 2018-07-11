#include <stdio.h>
#include <string.h>

int main(){
	char s[255], temp[2];
	char c, v[2];
	int a[127];
	int count =0;
	gets(s);
	
	
	for (int i =0; i< strlen(s); i++)
		printf("%c\n", s[i]);
		
		
	fflush(stdin);
	scanf("%s", &v);
	for (int i=0; i< strlen(s); i++){
		temp[0] = s[i];		
		if (strcmp( v , temp ) == 0)
			count ++;
	}
	printf("count = %d\n", count);
	
	
	for ( int i=0; i<127; i++)
		a[i] = 0;
	for (int i=0; i< strlen(s); i++){
		c = s[i];
		a[(int)c] += 1;
	}	
	for (int i= 32; i<127; i++ )
		if (a[i] != 0)
			printf("Ky tu : '%c' xuat hien %d lan. \n", (char) i, a[i]);
	
	return 0;
}
