#include<stdio.h>

    int main (){

        int arr[2][2];
        int brr[2][2];
        int res[2][2];
        //matrix a:
        for(int i = 0; i<=1; i++){
            for(int j = 0; j<=1; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        // matrix b:  
        for(int i = 0; i<=1; i++){
            for(int j = 0; j<=1; j++){
                scanf("%d", &brr[i][j]);
            }
        }

        
        printf("the resultant matrix is :\n");

        for(int i = 0; i<=1; i++){
            for(int j = 0; j<=1; j++){
                 
                printf(" %d ", arr [i][j] + brr [i][j]);
            }
            printf("\n");
        }

        return 0;
    }