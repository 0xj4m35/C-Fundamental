#include <stdio.h>
#include <cstdlib> 
#include <ctime> 

void init(int card[], int *s_card){
	printf("\tCARD\n");
	printf("Enter the number of cards : ");
	scanf("%d", s_card);
	printf("OK! We have %d cards:\n", *s_card);
	for (int i = 0; i<*s_card; i++)
		printf("\tX");
	printf("\n\n");
	for (int i = 0; i<*s_card; i++)
		card[i] = 1 + rand() % 13;
}

void ch_card(int a){
	if ( a == 1)
		printf("A");
	if ((a>=2) && (a<=10))
		printf("%d", a);
	if (a == 11)
		printf("J");
	if (a == 12)
		printf("Q");
	if (a == 13)
		printf("K");	
}

void choice(int *c1, int *c2, int *c3, int *f1, int *f2, int *f3){
	printf("Your choice 1: ");
	scanf("%d", c1);
	printf("Your choice 2: ");
	scanf("%d", c2);
	printf("Your choice 3: ");
	scanf("%d", c3);
	printf("Your friend choice 1: ");
	scanf("%d", f1);
	printf("Your friend choice 2: ");
	scanf("%d", f2);
	printf("Your friend choice 3: ");
	scanf("%d", f3);
}

void checkCard(int a[], int size){
	printf("CARD USED:\n");
	for (int i=0; i<size; i++){
		printf("\t");
		ch_card(a[i]);		
	}
		
}

int main(){
	srand(time(0));
	int card[200], s_card, ych1, ych2, ych3, fch1, fch2, fch3;
	int y_mark, f_mark;
	init( card, &s_card);
	
	choice(&ych1, &ych2, &ych3, &fch1, &fch2, &fch3);
	y_mark = card[ych1-1] + card[ych2-1] + card[ych3-1];
	f_mark = card[fch1-1] + card[fch2-1] + card[fch3-1];
	
	printf("\nYour Cards are : \t\t");
	ch_card(card[ych1-1]);
	printf("\t");
	ch_card(card[ych2-1]);
	printf("\t");
	ch_card(card[ych3-1]);
	printf("\nYour mark is : \t\t %d\n\n", y_mark);
	
	printf("Your Friend Cards are : \t");
	ch_card(card[fch1-1]);
	printf("\t");
	ch_card(card[fch2-1]);
	printf("\t");
	ch_card(card[fch3-1]);
	printf("\nYour Friend mark is : \t %d\n\n", f_mark);
	
	if (y_mark > f_mark) 
		printf("\n\t\t\tYOU WIN!!!\n\n");		
	else 
		if (y_mark < f_mark)
			printf("\n\t\t\tYOUR FRIEND WIN!!!\n\n");		
		else
			printf("\n\t\t\tEQUAL\n\n"); 		
	checkCard(card, s_card);
	return 0;
}
