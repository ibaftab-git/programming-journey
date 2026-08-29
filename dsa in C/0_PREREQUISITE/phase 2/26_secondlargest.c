#include <stdio.h>
#include <limits.h>

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);

    }
}

void arrinput(int *arr, int n, char name[]){
    printf("enter the %d element in the array %s :", n, name);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void max(int *arr, int n, int *largest, int *scndlrgst){
    *largest = INT_MIN;
    *scndlrgst = INT_MIN;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] > *largest)
        {
            *largest = arr[i];
        }
        
    }

    for(int i = 0; i< n; i++){
        if (*scndlrgst < arr[i] && *largest != arr[i]){
            *scndlrgst = arr[i];
        }
    }
    
}

int main()
{
    
int n, largest, scndlrgst;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n, "arr");
    
    max(arr, n, &largest , &scndlrgst);

    printf("max = %d\nsmax = %d", largest, scndlrgst);

    

    

    return 0;
}