#include <stdio.h>
#include <math.h>
 
int main(){
    int i, j, k;
    for(i = 0; i <= 9; i++)
        for(j = 0; j <= 9; j++)
            for(k = 0; k <= 9; k++){
                if(i == 0){
                    if(j == 0){
                        printf(" %d^1 = %d\n", k, k);
                    }
                    else{
                        if((10*j + k) == (pow((float)j, 2)+pow((float)k, 2)))
                        printf(" %d^2 + %d^2 = %d\n", j, k, 10*j+k);
                    }
                }
                else{
                    if((100*i + 10*j + k) == (pow((float)i, 3) + pow((float)j, 3) + pow((float)k, 3)))
                    printf(" %d^3 + %d^3 + %d^3 = %d\n", i, j, k, 100*i + 10*j + k);
                }
            }
    return 0;
}
