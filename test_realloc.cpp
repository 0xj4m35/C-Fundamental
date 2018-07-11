#include <stdio.h>
#include <malloc.h>


void ins(int arr[], int *size){
    *size += 1;
    arr = (int*) realloc (arr, (*size+1)*sizeof(int));
    scanf("%d", &arr[*size-1]);
    
}
void display(int arr[], int size){
    for(int i=0; i< size; i++)
        printf("%8d", arr[i]);
}

int main() {
    bool stop = false;
    int choice, size=0;
    int *arr = (int*) malloc(1*sizeof(int));
    do{
        scanf("%d", &choice);
        switch(choice){
            case 1: {
                ins(arr, &size);
                printf("\nsize = %d\n", size);
                break;
            }
            case 2: {
                display(arr, size);
                break;
            }
            default:{
                stop = true;
                break;
            }
        }
    } while (stop == false);
    return 0;
}

