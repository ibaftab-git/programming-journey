#include<stdio.h>
int main (){

//Rectangel....
    // int m, n; 
    // printf("enter no of rows :");
    // scanf("%d", &n);

    
    // printf("enter no of coulumn :");
    // scanf("%d", &m);

    // for (int i = 1; i<= n ; i++){
    //    for(int j = 1 ; j <= m ; j++){
    //     printf("%d ", j);
    // }
    // printf("\n");
    // }

// Solid square....
    int n; 
    printf ("enter the number of row "); 
    scanf ("%d", &n);
        for (int i = 1; i<= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            printf("%d ", j);
        }
            printf("\n");
        }
    


    return 0;
}