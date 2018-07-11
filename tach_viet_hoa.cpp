#include <stdio.h>
#include <string.h>

void split(char stg[100][255], int &index, char s[]){
	char *toke;
	index =0;
	toke = strtok (s," ");
  	while (toke != NULL){
	    strcpy(stg[index++], toke);
	    toke = strtok (NULL," ");
  	}	
}

void exportst(char s[], char stg[100][255], int index){
	for (int i=0; i<index; i++){
		strcat(s, stg[i]);
		strcat(s, " ");
	}
}


int main(){
	char c[255], temp[255] ="" , s[255]="";
	char stg[100][255];
	int index;

	printf("Nhap xau ki tu: ");
	fflush(stdin);
	gets(c);
	
	split(stg, index, c);
	
	strcpy(temp, stg[index-1]);
	strupr(stg[index-1]);
	
	exportst(s,stg,index);
	
	printf("Chuoi sau khi xu li cau 1: %s\n", s);
	strcpy(stg[index-1], temp);
	
	if (index < 2)
		printf("khong co tu dao nguoc");
	else{
		strrev (stg[2]);
		strcpy(s, "");
		exportst(s, stg, index);
		printf("Chuoi sau khi xu li cau 2: %s\n", s);
	}
	
	
//	for(int i=0; i < index; i++)
//		puts(stg[i]);
	
	

	
	return 0;
}

