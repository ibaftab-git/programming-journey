#include<stdio.h>

int diff (int a, int b){
    int x = a-b;
    if (x<0) return -(x);
    else return x;
}

int main (){

    int x, y; 
    printf("enter x & y =");
    scanf("%d %d", &x, &y);
    int s = diff(x, y);

    printf("%d", s);
    return 0;
}