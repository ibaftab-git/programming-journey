#include<stdio.h>

int main (){
    int arr [5] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i<=4; i++){
       printf("%d" ,arr[i]); 
    }

    printf("\n");
   
    //1st..
    int k = 0;
    int brr[n];
    for(int i = n-1; i>= 0; i--){
        brr[k] = arr[i];
        k++;
    }

    for (int  i = 0; i < n; i++){
        printf("%d", brr[i]);
    }

    //by myself...
    //2nd...
    // for(int i = 0; i<n/2 ; i++){
        
    //     int temp = arr[i];
    //     arr[i] = arr[n-1 -i];
    //     arr[n-1 -i] = temp;
    // }

    //3rd....
    // int start  = 0, end = n-1; //by gpt
    // while(start < end){
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }

    // for (int  i = 0; i < n; i++){
    //     printf("%d", arr[i]);
    // }
    
    return 0;
}