#include<stdio.h>
int main (){

    long long int n, x, sum = 0;
    printf("enter number :");
    scanf("%lld",&n );  // use  for long int value %lld
    while( n != 0){     
        x = n%10;
        sum = sum + x;
        n = n/10; //forgot this line
    }
    printf("The sum is %d", sum );

    return 0;
}