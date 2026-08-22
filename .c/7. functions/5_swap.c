#include<stdio.h>

void swap( int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
        
}

int main (){
    int a; int b; 
    printf("enter a :");
    scanf("%d", &a);
    
    printf("enter b :");
    scanf("%d", &b);

    swap(&a ,&b);

    printf("a = %d, b = %d", a, b);
    return 0;
}