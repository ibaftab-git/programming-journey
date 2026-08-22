#include<stdio.h>
int main(){

    // int arr[5] = {1, 2, 5, 8, 9};
    
    // float arr[5] = {1.2, 2.4, 4, 4.0, 4.9};
    // printf("%f", arr[2]);;

    int arr[5];
    
    int i;
    for(int i= 0; i<=4; i++){
    printf("enter the number %d\n", i);;
    scanf("%d", &arr[i]);    
    }
    for(int i= 0; i<=4; i++)printf("the value of %d is %d\n", i,arr[i] ); 
    

    return 0;
}