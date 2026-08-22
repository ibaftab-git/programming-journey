#include <stdio.h>
#include <limits.h>



void inputarray(int m , int n, int arr[m][n] ){
    for(int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
}
// arr[m][n] == (*arr)[n] both are same...
void minmax(int m, int n, int (*arr)[n], int *min, int *max){
    *min = INT_MAX;
    *max = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > *max){
                *max = arr[i][j];
            }
            if(arr[i][j] < *min){
                *min = arr[i][j];
            }
        }
    }
    
    printf("\nmin = %d", *min);
    printf("\nmax = %d", *max);

}


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
    int m, n, min, max;

    printf("enter m : ");
    scanf("%d", &m);

    
    printf("enter n : ");
    scanf("%d", &n);

    int arr[m][n];
    

    printf("enter arr :\n");
    inputarray(m, n, arr);

    minmax(m, n, arr, &min, &max);

    // printmatrix(m, n, arr);

    
   




    return 0;
}