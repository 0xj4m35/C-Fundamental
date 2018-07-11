#include <stdio.h>
#include <math.h>

int main(){
	int t;
	bool is = true;
	scanf("%d", &t);
	if (t<2)
		is = false;
	else
		for (int i = 2; i <= (int)sqrt(t); i++){
			if (t % i == 0){
				is = false;
				break;
			}
		}
//	if (is)
//		printf("is Prime");
//	else
//		printf("isnt Prime");
	printf((is)? "is Prime":"isnt Prime");
	return 0;
}
