#include <stdio.h>
#include <math.h>

int main(){
	double sum, a, b;
	FILE *input, *output;
	input = fopen("input.txt","r");
	output = fopen("output.txt","w");
	
	fscanf(input, "%lf%lf%lf", &sum, &a, &b);
	sum = sum + sum*a/100 + sum *b/100;
	fprintf(output, "The total meal cost is %.0lf dollars.", round(sum));
	fclose(input);
	fclose(output);
	return 0;
}
