#include<stdio.h>
int main (){

    int n; 
    printf("enter n =");
    scanf("%d", &n);

// Totally mathematics...

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j<= 2*n - 1; j++){
    //         if( i + j >= (n+1) && i + j <= 2*n){
    //           printf("* ");  
    //         }
    //         else printf(" ");
    //     }
    //     printf("\n");
    // }

    int nsp = n-1; 
    int nst = n;
    
    for (int i = 1; i<= n; i++){

        for (int j = 1; j<= nsp; j++){
            printf(" ");
        }

        for(int k = 1; k<=nst; k++){
            printf("* ");
        }
        nsp--;
        printf("\n");
    }
    return 0;
}