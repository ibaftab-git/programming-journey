#include <stdio.h>

void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void linearsearch(int *arr, int n, int *tgt, int *idx){
    for(int i = 0; i < n; i++){
        if(*tgt == arr[i]){
            *idx = i;
           break; 
        }
        
    }
    // else if printf("not found\n");

}

int main()
{
    int n, tgt, idx = -1;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    arrinput(arr, n);

    printf("enter tgt: ");
    scanf("%d", &tgt);

    linearsearch(arr, n, &tgt, &idx);

    if(idx != -1)
    printf("tgt is at %dth index  ", idx);

    else
    printf("tgt not found!!!!!");
    


    return 0;
}