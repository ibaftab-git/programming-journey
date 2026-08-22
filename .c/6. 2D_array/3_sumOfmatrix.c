#include<stdio.h>

    int main (){

        int m, n;
        
        printf("enter matrix size m x n : ");
        scanf("%d %d", &m, &n);

        int arr[m][n];

        printf("enter the matrix elements :\n");

        for(int i = 0; i<=m-1; i++){
            for(int j = 0; j<=n-1; j++){
                 
                scanf("%d", &arr[i][j]);
            }
         }
        
        int sum = 0;
        
        for(int i = 0; i<=m-1; i++){
            for(int j = 0; j<=n-1; j++){
                sum += arr[i][j];
            }
        }

        printf("the sum is %d", sum );

        return 0;
    }