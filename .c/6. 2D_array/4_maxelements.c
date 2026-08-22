#include<stdio.h>
#include<limits.h>

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

        int x = INT_MIN;
        int r, c;
        
        for(int i = 0; i<=m-1; i++){
            for(int j = 0 ; j <= n-1 ; j++){
                if(x < arr[i][j]){
                    x = arr[i][j];
                    r = i;
                    c = j;
                }
            }
        }

        printf("the max is %d and placed at (%d, %d)", x, r, c);

        return 0;
    }