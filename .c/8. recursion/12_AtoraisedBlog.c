#include<stdio.h>


// Basic method
// int power(int a, int b ){
//     if ( b == 0) return 1;
//        return a * power(a, b-1);
//     }

int power(int a, int b){
    if ( b == 1 || b == 0 )return a;
        int x = power(a, b/2);
        if (b % 2 == 0 ) return x * x;
        if ( b % 2 != 0 )return x * x * a;
    
}

int main (){
    int a, b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    printf("%d", power(a, b));
    return 0;
}