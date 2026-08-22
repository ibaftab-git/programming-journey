#include<stdio.h>
int main (){
int n;
    printf("enter term :");
    scanf("%d", &n);


    // we are going to use extra variables
    // 4,7,10,13 ....to n term
    int a = 4;
    for(int i = 1; i<= n; i++){
         printf("%d, ", a);
         a = a+3;
    }
   


    return 0;
}