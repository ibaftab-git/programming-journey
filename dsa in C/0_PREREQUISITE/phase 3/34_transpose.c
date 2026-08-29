#include <stdio.h>


// int arr[m][n] == int (*res)[n] :- pointer to int [4]...
// these both are equal one is passing whole matrix directly 
// while other says we are pointing to an address that contains integer array
// In function parameters:
// int arr[m][n]
// is adjusted to
// int (*arr)[n]
// (pointer to an array of n integers)

void inputarray(int m , int n, int arr[m][n] ){
    for(int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
}
// m = 3, n = 2
void transpose(int m, int n, int arr[m][n], int Trn[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            Trn[i][j] = arr[j][i];
        }
}

}
//printing the transposed matrix...
void printmatrix(int rows, int cols, int arr[rows][cols]){
   for(int i = 0; i < rows; i++){
        for (int  j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
    

int main()
{
    int m, n ;

    printf("enter m : ");
    scanf("%d", &m);

    
    printf("enter n : ");
    scanf("%d", &n);

    int arr[m][n];
    
    int Trn[n][m]; //this will contain the tranposed matrix

    printf("enter arr :\n");
    inputarray(m, n, arr);
    
    transpose(m, n, arr, Trn);


    // for (int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         printf("%d ", Trn[i][j]);
    //     }
    //     printf("\n");
    // }

    printmatrix(n, m, Trn);




    return 0;
}