#include<stdio.h>
int main (){

    // wap for 3,12,48, .... upto n terms
    int i, n, a= 3;
    printf("enter the term :");
    scanf("%d", &n);
    for(i=1; i<=n ; i++){
        printf("%d ", a);
        a = a*4;
    }


    return 0;
}