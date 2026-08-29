#include <stdio.h>


void arrinput(int *arr, int n);
void minMax(int *arr, int n , int *min , int *max);


int main()
{
    int n, min, max;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n);
    minMax(arr, n, &min, &max);

    printf("min = %d\nmax = %d", min, max);
    

    return 0;
}

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void minMax(int *arr, int n , int *min , int *max){
    *min = *max = arr[0] ;
    for (int i = 0; i< n; i++){
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}   
