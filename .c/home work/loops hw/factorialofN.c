#include<stdio.h>
int main(){

    //    Print the factorials of first ‘n’ numbers
    
    int n,i,  product = 1;
    printf("enter term :");
    scanf("%d", &n);

    for(i =1 ; i<=n; i++){
        product = product*i;
        printf("the factorial of %d is %d\n", i, product);
    }

    
    return 0;
}