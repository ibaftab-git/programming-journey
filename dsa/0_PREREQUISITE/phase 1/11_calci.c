#include<stdio.h>


int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

float divide(int a, int b){
    return (float)a/b;
}

int mod(int a, int b){
    return a%b;
}

int main(){

    int a, b;
    printf("enter a : enter b :");
    scanf("%d %d", &a, &b);

    char ch;

    printf("operation to be performed :- \naddition -> +\nsubtraction -> -\nmultiply -> *\ndivide -> /\n");
    printf("\n\nenter operator =");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        printf("%d", add(a, b));
        break;

    case '-':
        printf("%d", sub(a, b));
        break;

    case '*':
        printf("%d", multiply(a, b));
        break;
    
    case '/':
        printf("%.2f", divide(a, b));
        break;

    case '%':
        printf("%d", mod(a, b));

    default:
        break;
    }

    return 0;
}