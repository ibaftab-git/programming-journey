    #include<stdio.h>

    int main (){

        int m, n;
            
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
                for(int j = 0; j<=i; j++){     //j < i → lower triangle, j > i → upper triangle 
                // using <= means principal diagonal are swap but it will still same      
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
            
            

            return 0;
        }