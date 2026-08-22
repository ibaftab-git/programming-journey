#include<stdio.h>

//by function
    void reverse (int arr[], int a, int b){// a= startind index, b= ending index
        int i = a;
        int j = b;
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    }


    void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);

    }
}

int main(){

    // question, rotate element from index 1 to 4
    int arr[7]= {1, 2, 3, 4, 5, 6, 7};
    
    // by temp dabba;
    // for(int i = 1, j = 4; i<=j; i++,j--){
    //     int temp = arr [i];
    //     arr [i] = arr [j];
    //     arr [j] = temp;
    // }
    
    reverse(arr, 1, 4);
    // index 1 to 4 reversed
    print(arr, 7);
    
    // for(int i = 0; i<=6; i++){
    //     printf("%d ", arr[i]);
    // }
   
    return 0;
}