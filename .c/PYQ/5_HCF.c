#include<stdio.h>

int main (){
    
    int a, b, r ; // a-> divisor, b-> dividend, r-> remainder....

    scanf("%d%d",&a, &b);
    int x ;
    // while (b != 0){
    //     r = b % a;
        
    //     b = a;
    //     a = r;
        
    // }

    while (a != 0) {
    r = b % a;
    b = a;
    a = r;
}
printf("%d", b);


    // printf("%d", r);
 
    return 0;
}