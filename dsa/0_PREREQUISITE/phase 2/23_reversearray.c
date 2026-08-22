#include <stdio.h>

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void reverse(int *arr, int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);

    }
}

int main()
{
     int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n);

    reverse(arr, n);
    print(arr, n);


    return 0;
}