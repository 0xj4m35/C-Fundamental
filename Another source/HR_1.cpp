  	
#include<stdio.h>
#include<string.h>
int main(){  
	int i = 4;
	double d = 4.0;
	char s[] = "Hackerrank ";
	int j;
    double d2;
    char s1[100]="";
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &j);
    scanf("%lf", &d2);
    fflush(stdin);
    gets(s1);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i+j);

    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d+d2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s\n", s1);
    return (0);
}
