#include<stdio.h>

int square(int num){
    return num * num;
}

int main (){

    int n; 
    printf("enter n =");
    scanf("%d", &n);
    int s = square(n);

    printf("%d", s);
    return 0;
}