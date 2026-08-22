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

    for (int i = 0; i <= n-1; i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}