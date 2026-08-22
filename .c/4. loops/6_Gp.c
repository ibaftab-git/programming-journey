#include<stdio.h>
int main (){

    // 1.2.4.6.8.10 upto n terms
    int i, n , a=1;
    printf("the term :");
    scanf("%d", &n);
    for(i = 1 ; i <= n ; i++){
        printf("%d ", a);
        a = a*2;
        
    }

    return 0;
}