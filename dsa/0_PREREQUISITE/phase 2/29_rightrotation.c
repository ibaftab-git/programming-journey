#include <stdio.h>

void reverse(int *arr, int a, int b) {
    int temp;
    
    for(a ; a < b; a++ ) {
        temp = arr[a];
        arr[a] = arr[b];;
        arr[b] = temp;
        b--;
    }
}

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);

    }
}

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

int main()
{
    int n, k; // k = rotation...
    
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n]; 
    arrinput(arr, n);

    printf("enter k: ");
    scanf("%d", &k);

    k = k%n;

    // print(arr, n);
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);

    print(arr, n);
    

    return 0;
}