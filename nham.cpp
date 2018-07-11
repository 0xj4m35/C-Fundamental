#include <stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	if ((c >= '1') && ( c <= '9'))
		printf("%c", c);
	if ( c == '0')
		printf("10");
	if (( c == 'J') || ( c == 'Q') || ( c == 'K') || ( c == 'j') || ( c == 'q') || ( c == 'k'))
		printf("11");
	return 0;
}
