#include <stdio.h>


// int arr[m][n] == int (*res)[n] :- pointer to int [4]...
// these both are equal one is passing whole matrix directly 
// while other says we are pointing to an address that contains integer array

void inputarray(int m , int n, int arr[m][n] ){
    for(int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
}

void sumofmatrix(int m, int n, int arr[m][n], int brr[m][n], int (*res)[n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = arr[i][j] + brr[i][j];
    }
}

}

void printmatrix(int m, int n, int (*arr)[n]){
   for(int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++)
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
    int brr[m][n];
    int res[m][n];

    printf("enter arr :\n");
    inputarray(m, n, arr);
    printf("enter brr :\n");
    inputarray(m, n, brr);

    sumofmatrix(m, n, arr, brr, res);

    printmatrix(m, n, res);





    return 0;
}