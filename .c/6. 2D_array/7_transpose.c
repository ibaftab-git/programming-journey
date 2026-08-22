    #include<stdio.h>

    int main (){

        int m, n;
            
            printf("enter matrix size m x n : ");
            scanf("%d %d", &m, &n);

            int arr[m][n], brr[n][m];

            printf("enter the matrix elements :\n");

            for(int i = 0; i<=m-1; i++){
                for(int j = 0; j<=n-1; j++){                 
                    scanf("%d", &arr[i][j]);
                }
            }
            printf("transpose is :\n"); 
            for(int i = 0; i<=m-1; i++){
                for(int j = 0; j<=n-1; j++){
                brr[i][j] = arr[j][i];
                }
                
            }
            for(int i = 0; i<=m-1; i++){
                for(int j = 0; j<=n-1; j++){
                printf("%d ", brr[i][j]);
                }
                printf("\n");
            }
            //works only for square matrix.....
            

            return 0;
        }