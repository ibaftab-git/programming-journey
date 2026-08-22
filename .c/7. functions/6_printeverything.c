#include<stdio.h>
int main (){

    int a = 24;
    int* x = &a;
    int** y = &x;//by chat gpt used ** star at a time (this is known as dounle pointer)


    printf("%d\n", a); //value of a
    printf("%p\n", &a); // a ki address batao, &a = a ki address
    printf("%p\n", x); // x ek pointer variable h, jisme ki a ki adress h.
    printf("%p\n", &x); // x ki khud ki address 
    printf("%p\n", y); // x ki address , jo baad m maine y me store kr di((((ye baad me added h))))
    printf("%d\n", *x); // %d mtlb int, and * mtlb = x ke pass jo address(a) h wahan jao, aur batao uski (a) ki value kya h?


    return 0;
}