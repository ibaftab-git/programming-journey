#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main (){
    

    int arr [7] = {1, 3, 4, 9, 6, 10, 2};
    int n = 7;
    

    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for( int j = i; j <= n-1; j++){ //from here we find minimum in array...
            if(min > arr[j]){
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx]; // we changed the idx of min value array in current idx...
        arr[minidx] = arr [i];
        arr[i] = temp;
    }

    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}