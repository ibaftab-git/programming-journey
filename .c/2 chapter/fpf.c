#include<stdio.h>
    int main (){

        float x;                               //finding fractional part function
        printf("enter x :");
        scanf("%f", &x);

        int y=x;
        float fpf = x - y;
        printf ("fpf is %f", fpf); 

        return 0;
    }