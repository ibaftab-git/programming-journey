#include<stdio.h>
#include<math.h>
int main(){

    // int arr [5] = {1,2,3,4,5};
    // int max = -1;
    // for(int i = 0; i<=4 ; i++){
    //     if (max < arr[i]){
    //         max = arr[i];
    //     }
    // }

int arr [5] = {-99, -78, -499, -500, -44};
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i<=4 ; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr [i]){
            min = arr[i];
        }
    }


    printf("max value is %d\n", max);
        printf("min value is %d", min);
    
    return 0;
}