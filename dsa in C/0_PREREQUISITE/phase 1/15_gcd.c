#include <stdio.h>

int gcd(int a,int b);

int main()
{
    int a, b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);

    printf("the gcd of %d and %d is = %d", a, b, gcd(a, b));

    return 0;
}



int gcd(int a, int b){
    int r; 
    while (r!=0){
        r = b%a;
        b = a;
        a = r;
    }
    return b; 
}
