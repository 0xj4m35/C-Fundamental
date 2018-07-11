#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int max(int a, int b){
    return (a>b)? a:b;
}
int main(){
    int arr[6][6];
    int sum, maxx = -64;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){         
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    for (int i = 0; i<4; i++){
        for (int j=0; j<4; j++){
            sum = arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i+1][j+1] + arr[i][j+2] + arr[i+1][j+2] + arr[i+2][j+2];
            maxx = max( sum, maxx);
        }
    }
    printf("%d", maxx);
    return 0;
}

