#include <stdio.h>

void inputarray(int *arr, int m ){
    for(int i = 0; i < m; i++){
            scanf("%d", &arr[i]);
}
}

int arrsum(int *arr, int m){
    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += arr[i];
    }
    return sum; 
}

int main()
{
    int m;

    printf("enter m : ");
    scanf("%d", &m);

    
   

    int arr[m];
    

    printf("enter arr :\n");
    inputarray(arr, m);

    int x = arrsum(arr, m);

    printf("sum = %d", x);

    

    return 0;
}