#include<stdio.h>
int main(){

    //    Print the factorial of a given number ‘n’.
    
    int n,i,  product = 1;
    printf("enter term :");
    scanf("%d", &n);

    for(i =1 ; i<=n; i++){
        product = product*i;
    }

    printf("the factorial of %d is %d", n, product);
    return 0;
}