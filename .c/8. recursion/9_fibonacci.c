#include<stdio.h>

int fibo(int n){
    if (n == 1 || n == 2)return 1; // bcz for n = 1 and n = 2 the fibo is 1 ;
    return fibo(n-1) + fibo(n-2);
    
}

// THIS IS FOR Nth FIBO, AND THE BELOW ONE IS FOR n IN SERIES
    // int main (){
    // int n;    
    // printf("enter the fibonacci term :");
    // scanf("%d", &n);
    // int x = fibo(n);
    // printf("the %dth fibonacci would be %d",n, x );
    // return 0;
    // }

        int main (){
    int n;    
    printf("enter the fibonacci term :");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
    }