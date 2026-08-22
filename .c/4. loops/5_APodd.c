#include<stdio.h>
int main (){

    // // write a code from 1,3,5,7 to n term

    // int i, n;
    // printf("enter term :");
    // scanf("%d", &n);
    // for(i = 1 ; i<=((2*n)-1) ; i = i + 2){
    //     printf("%d ", i);
    // }

     // write a code from 4,7,10,13 to n term

    // int i, n;
    // printf("enter term :");
    // scanf("%d", &n);
    // for(i = 4 ; i<=((3*n)+1) ; i = i + 3){
    //     printf("%d ", i);
    // }

    int a = 100, i, n;
     printf("enter term :");
    scanf("%d", &n);
    for(i = 1; i<=n ; i++){
        printf("%d ", a);
        a = a-3;

    }

    return 0;
}