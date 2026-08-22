#include<stdio.h>

    // USING LOOPS
    // int power(int a, int b){
    //     int x = 1;
    //     for(int i = 1; i<=b; i++){
    //         x = a * x;
    //     }
    //     return x;
    // }

    int power(int a, int b){
        if (a == 0)return 0; //forgot to use == sign
        else if (b == 0)return 1; 
        int x = a * power(a, b-1);
        return x;
    }

    int main (){
        int a, b;
        printf("enter a :\nenter b :");
        scanf("%d %d", &a, &b);
        int p = power(a, b);
        printf("the power of %d to %d is %d",a, b, p);
        
        // printf("the power of %d of %d is %d", a ,b, power(a,b));
        return 0;
    }