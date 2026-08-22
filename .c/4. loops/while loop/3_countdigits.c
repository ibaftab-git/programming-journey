#include<stdio.h>
int main (){
    
    long int  n, count = 0 ;
    printf("enter any number :");
    scanf("%ld", &n);
    while(n != 0){
        n = n/10;
        count++;
        }
    printf("the digit in the the number is %d", count);

    return 0;
}