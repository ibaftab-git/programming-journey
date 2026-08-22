#include<stdio.h>
int main (){

    int i, n;
    printf("enter num :");
    scanf("%d", &n);

    // int a = 0;
    // for(i=2; i<=n-1 ; i++){
    //     if(n%i == 0 ){
    //         a = 1;
    //         break;}}
    
    // if(n == 1 )printf("the numbr %d is neither prime nor composite", n);
    // else if( a == 0){printf("the number %d is prime", n);}
    // else {printf("the number %d is composite\n", n);}

    for ( i = 2; i < n ; i++ ){
        if (n % i == 0){printf("the number is composite");
        break ;}
    }
    if (n == i)printf("the number is prime");
    else if (n==1 )printf("the num is neither prime nor composite");
    return 0;
}