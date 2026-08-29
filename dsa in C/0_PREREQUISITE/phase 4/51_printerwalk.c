#include <stdio.h>

void inputarray(int *arr, int m ){
    for(int i = 0; i < m; i++){
            scanf("%d", &arr[i]);
        }
}

void pointerwalk(int *arr, int m){
    for(int i = 0; i < m; i++){
        printf("address = %p, value = %d\n", &arr[i], arr[i]);
    }
}

int main()
{
    int m;

    printf("enter m : ");
    scanf("%d", &m);

    
   

    int arr[m];
    

    printf("enter arr :\n");
    inputarray(arr, m);

    pointerwalk(arr, m);

    

    

    return 0;
}