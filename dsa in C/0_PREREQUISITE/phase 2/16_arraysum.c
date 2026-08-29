#include <stdio.h>
void arrsum(int *arr, int n, int *totalsum);

void arrinput(int *arr, int n);

int main()
{
    int n, totalsum;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n);

    arrsum(arr, n, &totalsum);

    printf("the sum of the array is %d",totalsum );


    return 0;
}

// int arrsum(int *arr, int n){
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

void arrsum(int *arr, int n, int *totalsum){
    *totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        *totalsum += arr[i];
    }
    
}

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}