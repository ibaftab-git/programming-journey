#include <stdio.h>



void inputarray(int m , int n, int arr[m][n] ){
    for(int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
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
    

int rowsum(int m, int n, int (*arr)[n]){
    int sum ;
    for (int  i = 0; i < m; i++)
    {
        sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        printf("sum of %dth row is %d\n", i, sum);
    }
    //here we r not returning int so we should use void...
}

int columsum(int m, int n, int (*arr)[n])
{
    int sum;
    for(int j = 0; j < n; j++){
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum +=arr[i][j];
        }
        printf("sum of %dth column is %d\n", j, sum);
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
    

    printf("enter arr :\n");
    inputarray(m, n, arr);
    
    rowsum(m, n, arr);

    // printmatrix(m, n, arr);

    columsum(m, n, arr);





    return 0;
}