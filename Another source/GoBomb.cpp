#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int 	wire[6];
int 	numWire, numRed, numBlack, numWhite, numBlue, numYellow, key, seri, cus;

int 	random(int a, int b){
	srand(time(NULL));
	return( a+rand()%(b-a+1 ));
}

int 	isOdd(int b){
	if (b%2==0)
		return(0);
	else
		return(1);
}

// red=1  black=2  white=3  blue=4  yellow=5

void 	init(){
	numWire = random(3,6);
	seri = random(100,10000);
	for (int i=0; i<numWire; i++){
		wire[i] = random(1,5);
	}
	for (int i =0; i<numWire; i++){
		if (wire[i]==1)
			numRed += 1;
		if (wire[i]==2)
			numBlack += 1;
		if (wire[i]==3)
			numWhite += 1;
		if (wire[i]==4)
			numBlue += 1;
		if (wire[i]==5)
			numYellow += 1;
	}
}

void 	printWire1(int a){
	if (a==1)
		printf("----   Red  ----\n");
	if (a==2)
		printf("----  Black ----\n");
	if (a==3)
		printf("----  White ----\n");
	if (a==4)
		printf("----  Blue  ----\n");
	if (a==5)
		printf("---- Yellow ----\n");
}


void 	printWire(){
	printf("\n\tWIRE\n\n");
	printf("Serial = %d\n\n",seri);
	printf("Total Wire = %d\n\n", numWire);
	for (int i=0; i<numWire; i++){
		printWire1(wire[i]);
	}
}

void 	progress(){
	printWire();
	if (numWire==3){
		if ((key==0)&&(numRed==0))
			key = 2;
		if ((key==0)&&(wire[2] == 3))
			key = 3;
		if ((key==0)&&(numBlue>1))
			if (wire[2]==4)
				key=3;
			else
				key=2;
		if (key == 0)
			key = 3;
	}
	
	if (numWire==4){
		if ((key==0)&&(numRed >1 )&& (isOdd(seri)==1))
			if (wire[3]==1)
				key=4;
			else
				if (wire[2]==1)
					key =3;
				else
					key=2;
		if ((key==0)&&(wire[3]== 5)&&(numRed==0))
			key=1;
		if ((key==0)&&(numBlue==1))
			key=1;
		if ((key==0)&&(numYellow>1))
			key=4;
		if (key == 0)
			key = 2;
	}
	
	if (numWire==5){
		if((key==0)&&(wire[4]==2)&&(isOdd(seri)==1))
			key = 4;
		if((key==0)&&(numRed==1)&&(numYellow>1))
			key =1;
		if ((key==0)&&(numBlack==0))
			key=2;
		if(key==0)
			key = 1;
	}
//	(key==0)&&
	if (numWire==6){
		if ((key==0)&&(numYellow==0)&&(isOdd(seri)==1))
			key=3;
		if ((key==0)&&(numYellow==1)&&(numWhite>1))
			key =4;
		if((key==0)&&(numRed==0))
			key=6;
		if(key==0)
			key=4;
	}
	
	printf("\nWhich wire will be cut? : ...");
	scanf("%d", &cus);
	if (cus == key)
		printf("\n\tCONGRATULATION!!!");
	else
		printf("\n\tSTUPID GUY :( ");
}


int main(){
	char c;
	do{
		cus=0;
		key=0;
		numRed=0;
		numBlack=0;
		numWhite=0;
		numBlue=0;
		numYellow=0;
		init();
		progress();
		printf("\n\nDo you want to play again <Y/N> : ...");
		fflush(stdin);
		scanf("%c", &c);
	} while ((c=='y')||(c=='Y'));
	return(0);
}



