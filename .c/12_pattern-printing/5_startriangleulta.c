#include<stdio.h>
int main (){

        int n, i, j;
        printf("enter n : ");
        scanf("%d", &n);
// myself...

        // for (i = 1; i <= n; i++){
            
        //     for ( j = i; j <= n; j++){
        //         printf("*");
        //     }
        //     printf("\n");
        // }
        
// by teacher...
        for (i = 1; i <= n; i++){
            
            for ( j = 1; j <= n+1-i ; j++){
                printf("*");
            }
            printf("\n");
        }

    return 0;
}