#include <stdio.h>
#include <string.h>

int isSpecialCase(char c){
	if((c>='a' && c<='z') || (c>='A' && c<='Z')){
		return 0;
	}
	return 1;
}

int isDigit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	return 0;
}

void upCase(char &c){
	if(c>='a' && c<='z'){
		c-=32;
	}
}

void lowCase(char &c){
	if(c>='A' && c<='Z'){
		c+=32;
	}
}

int isUpCase(char c){
	if(c>='A' && c<='Z'){
		return 1;
	}
	return 0;
}

int isLowCase(char c){
	if(c>='a' && c<='z'){
		return 1;
	}
	return 0;
}


void chuanHoa(char s[]){
	int n=strlen(s);
	char c[255]="";
	int k=0;
	
	while (s[k] == ' ')
		s[k++] = '\0';
		
	k = n-1;	
	while (s[k] == ' ')
		s[k--] = '\0';
	
	for (int i=0; i<n-1; i++){		
		if (s[i] == ' ' && (s[i+1] == ' '|| s[i+1] == '.' || s[i+1] == ','))
			s[i] = '\0';
	}
			
	k=0;
	for (int i=0; i<n; i++)
		if (s[i] != '\0')
			c[k++] = s[i];
	strcpy(s,"");
	strcpy(s, c); 
	
	for (int i=0; i<strlen(s); i++)
		if (isUpCase(s[i]))
			lowCase(s[i]);
	
	upCase(s[0]);
	for (int i=1; i<strlen(s)-1; i++){
		if (s[i] == ' ' || s[i] == '.')
			upCase(s[i+1]);
	}
}


int main(){
	char s[255];
	fflush(stdin);
	gets(s);
	chuanHoa(s);
	puts(s);
	return 0;
}

