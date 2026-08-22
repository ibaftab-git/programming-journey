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

int main(){

    // question, rotate element by k times
    int arr[7]= {1, 2, 3, 4, 5, 6, 7};
    int k, n = 7; // k = no of rotation, n is number of element ie, n = 7
    printf("enter rotation k :");
    scanf("%d", &k);
    k = k%n;
    
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    // index 1 to 4 reversed
    for(int i = 0; i<=6; i++){
        printf("%d ", arr[i]);
    }
   
    return 0;
}