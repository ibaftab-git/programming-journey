#include<stdio.h>

int max (int a, int b){
    if (a > b)
    return a;
    else return b;
}

int main (){

    int x, y; 
    printf("enter x & y =");
    scanf("%d %d", &x, &y);
    int s = max(x, y);

    printf("%d", s);
    return 0;
}