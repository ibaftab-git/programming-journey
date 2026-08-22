#include<stdio.h>
int main (){

    int a = 5; 
    int b = 7;

    int *c = &a;
    int *d;
    d = &b;

    printf("a = %p\n", &a);
    printf("c = %p\n", c);
    printf("&c = %p", &c);
    // printf("\n %d", a);

    return 0;
}