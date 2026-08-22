#include<stdio.h>

int main(){
// one element is missing from 1 to 100 , find that one ...
    int arr[100];
    
    for(int i = 0; i<=99; i++){
        arr [i] = i+1;
    }// add value in array........

    arr [70] = 0; // remove value from one array...

    for(int i = 0; i<=99; i++){
        if(arr [i] != i+1)printf("%d is missing ", i+1);
    }

    return 0;
}