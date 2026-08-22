#include<stdio.h>

int main (){

    int arr [7] = {1, 3, 4, 9, 6, 10, 2};
    int n = 7;

    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i<n-1 ; i++){
        for (int j = 0; j <  n-1; j++){
            if (arr[j] > arr [j+1]){
                int temp = arr [j];
                arr [j] = arr [j+1];
                arr [j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}