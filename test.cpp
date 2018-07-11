#include <stdio.h>
#include <string.h>


int main(){
	char s1[50]="";
	char s2[50]="c";
//	char* ret = strstr(s1,s2);
//	strnset(s2, 98, 8);
//	char *ret = strncpy(s1, s2, 5);

//	if(strcmp(s1,s2) == 0)
//		printf("bang nhau");
//	else
//		if (strcmp(s1, s2) > 0)
//			printf("s1 > s2");
//		else
//			printf("s2 > s1");

//	printf("%s", ret);

	if(s1[0] < s2[0])
		printf("ok");
	else
		printf("not ok");


	return 0;
}

