#include<stdio.h>
int main (){

    // int n, x, r= 0;
    // printf("enter num :");
    // scanf("%d",&n);
    
    // while(n!=0){
    //     x= n%10;       
    //     r = r* 10 + x;        
    //     n = n/10;
    // }

    long long int  n, x,r = 0;
    printf("enter num :");
    scanf("%lld", &n);

    while(n!=0){
        x = n%10;
        r = r*10 + x;
        n = n/10;
    }


    printf("reverse is %lld", r);

    return 0;
}