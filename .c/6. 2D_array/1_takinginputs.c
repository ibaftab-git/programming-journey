#include<stdio.h>

    int main (){

        int arr[3][3];

        for(int i = 0; i<=2; i++){
            for(int j = 0; j<=2; j++){
                scanf("%d", &arr[i][j]);
            }
        }

        printf("the resultant matrix is :\n");

        for(int i = 0; i<=2; i++){
            for(int j = 0; j<=2; j++){
                printf(" %d ", arr[i][j]);
            }
            printf("\n");
        }

        return 0;
    }