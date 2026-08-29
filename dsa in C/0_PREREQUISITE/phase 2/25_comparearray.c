#include <stdio.h>

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

int compare(int *arr, int *brr, int n){
    int flag ;
    for (int i = 0; i< n; i++ ){
        flag = 0;
        if(arr[i] == brr[i]) 
        flag = 1;
    }
    return flag; 
}

int main()
{
    
int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n, "arr");
    
    int brr[n];
    arrinput(brr, n, "brr");

    int x = compare(arr, brr, n);

    printf("%d", x);

    return 0;
}