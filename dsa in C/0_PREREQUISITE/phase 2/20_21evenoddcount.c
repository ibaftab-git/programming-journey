#include <stdio.h>


void arrinput(int *arr, int n);
void count(int *arr, int n, int *noOfeven, int *noOfodd);


int main()
{
    int n, noOfeven, noOfodd;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];

    arrinput(arr, n);
    count(arr, n, &noOfeven, &noOfodd);

    printf("even = %d\nodd = %d\n", noOfeven, noOfodd);
    
    return 0;
}

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void count(int *arr, int n, int *noOfeven, int *noOfodd){
    *noOfeven = *noOfodd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0) (*noOfeven)++;
        else (*noOfodd)++;
    }
}