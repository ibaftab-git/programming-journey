#include<stdio.h>

    void reverse (int arr[]){
        int i = 0;
        int j = 6;
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    }

int main(){

    
    int arr[7]= {23, 19, 22, -19, -129, 55,65};
       
    reverse(arr);
    for(int i = 0; i<=6; i++){
        printf("%d", arr[i])
    }
   
    return 0;
}