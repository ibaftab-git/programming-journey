#include<stdio.h>

int power(int base , int exponent){
    int a = 1; 
    for (int i = 1; i<= exponent; i++){
        a = base * a;
    }
    return a; 
}

int main (){

    int base, exponent; 
    printf("enter base =");
    scanf("%d", &base);
    printf("enter exponent =");
    scanf("%d", &exponent); 
    
    int s = power(base, exponent);

    printf("%d", s);
    return 0;
}