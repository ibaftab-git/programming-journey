    #include<stdio.h>

    int main (){

        int m, n;
            // rotate matrix by 90 degree...
            printf("enter square matrix size n x n : ");
            scanf("%d", &n);

            int arr[n][n];

            printf("enter the matrix elements :\n");

            for(int i = 0; i<=n-1; i++){
                for(int j = 0; j<=n-1; j++){                 
                    scanf("%d", &arr[i][j]);
                }
            }

            for(int i = 0; i<=n-1; i++){
                for(int j = 0; j<=i; j++){      
                    int temp = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
            }

            printf("transpose is :\n"); 

            for(int i = 0; i<=n-1; i++){
                for(int j = 0; j<=n-1; j++){                 
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            
           printf("after rotation is :\n");

           for(int i = 0; i<=n-1; i++){
                for(int j = 0, k = n-1; j<k; j++, k--){ // for rotating we will use reversing 
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                    }
                    
                }
            for(int i = 0; i<=n-1; i++){
                for(int j = 0 ; j <= n-1; j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
            
            return 0;
        }