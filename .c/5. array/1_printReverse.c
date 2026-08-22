#include<stdio.h>
int main(){

    int arr[5];
    
    
    for(int i= 0; i<=4; i++){
    printf("enter the number %d\n", i);;
    scanf("%d", &arr[i]);    
    }
    for(int i= 4; i>=0; i--)printf("the value of %d is %d\n", i,arr[i] ); 
    

    return 0;
}