#include<stdio.h>
int main (){

   
    // while( 'a' <  'b')printf("\n malayalam is panindrom");

    long long int  n;
    printf("enter a number :");
    scanf("%lld", &n);
    long long int  x = 0, r, original = n;

    while(n != 0){
        r = n%10;
        x = x*10 + r;
        n = n/10;
    }
    // while(n!=0){
    //     x = n%10;
    //     r = r*10 + x;
    //     n = n/10;
    // }

    if(x == original) printf("it is palindrome");
    else printf("it's not a palindrome");


    return 0; 
}     