#include <stdio.h>
#include <string.h>

int check(char s[], char c[], int pos){
	int x= strlen(c), index=0;
	char temp[255];
	for (int i=pos; i<pos+x; i++)
		temp[index++] = s[i];
	if (strcmp(temp, c) == 0)
		return 1;
	else
		return 0;
}


int main(){
	char s[255], c[255];
	int count = 0;
	fflush(stdin);
	gets(s);
	fflush(stdin);
	gets(c);
	
	for (int i=0; i< strlen(s)-strlen(c)+1; i++ )
		if (check(s,c,i) == 1)
			count ++;
	
	printf("%d", count);

	return 0;
}

