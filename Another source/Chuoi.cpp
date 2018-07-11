#include <stdio.h>
#include <ctype.h>
#include <string.h>
void chuanHoa(char s[]){
	int size=strlen(s);
	int k=0, h=size-1;
	
//	Xoa dau cach dau
	while (s[k] == ' '){
		s[k] = '\0'; 
//		s[k]= "";
		k++;
	}
	
//	Xoa dau cach cuoi
	while (s[h] == ' '){
		s[h]= '\0';
		h--;
	}
	
//	Xoa dau cach giua
	for (int i=0; i<size-1; i++){
		if (s[i] ==' ' && s[i+1] == ' ')
			s[i] = '\0';
	}
	
//	Ghep chuoi lai
	char tmp[100] = "";
	k=0;
	for (int i =0; i<size; i++){
		if (s[i] != '\0')
			tmp[k++]=s[i];
	}
	strcpy(s, "");
	strcpy(s, tmp);
}

int main(){
//	char s;
//	printf("Nhap vao mot ki tu: ");
//	fflush(stdin);
//	scanf("%c", &s);
//	putchar(s);
//	putchar('\n');
//	if (isalpha(s)){
//		printf("Day la mot ki tu");		
//	}
//	if (isdigit(s)){
//		printf("Day la mot so");
//	}
	char s[100]="";
	fflush(stdin);
	gets(s);
	chuanHoa(s);
	puts(s);
	return 0;
}
