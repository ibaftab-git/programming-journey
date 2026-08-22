#include<stdio.h>
int main (){

    int m, n;

    printf("enter number of row :");
    scanf("%d", &n);

    printf("enter number of stars :");
    scanf("%d", &m);

 
    for (int i=0 ; i < n; i++){

        for(int j = 0; j<m; j++){
        printf("*");
    }
    printf("\n");
    }

    return 0;{}
}