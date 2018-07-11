#include <stdio.h>
#include <string.h>

int	isCon(char a[], int pos, int k){
	for (int i=pos+1; i<pos+k; i++){
		if (a[pos] != a[i])
			return 0;
	}
	return 1;
}

int main(){
	char s[100];
	gets(s);
	int k;
	scanf("%d", &k);
	for (int i=0; i<strlen(s)-k+1; i++){
		if (isCon(s, i, k) == 1){
			printf("have\n");
			break;
		}			
	}
	int n=strlen(s), x=0;
	char s0[100]="";
	for (int i=0; i<n-1; i++)
		if (s[i] == s[i+1])
			s[i] = '\0';	
	for(int i=0; i<n; i++){
		if (s[i] != '\0')
			s0[x++] = s[i];
	}
	s0[x] = '\0';
	puts(s0);
	return 0;
}
