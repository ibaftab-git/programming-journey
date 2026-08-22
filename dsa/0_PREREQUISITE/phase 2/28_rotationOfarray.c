#include <stdio.h>

    void arrinput(int *arr, int n){
    printf("enter the (%d) element in the array :", n);
    
    for (int  i = 0; i <n; i++){
        scanf("%d", &arr[i]);
        }   
    
    }

    void print(int *arr, int n){
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);

        }
    }


    void rotate(int *arr, int n, int rotation) {
        rotation = rotation %n;
        int savedelements[rotation];

        int limit  = n - rotation; 
        for (int i = 0; i < rotation ; i++) {
            savedelements[i] = arr[i];
        }

        for(int i = 0; i < limit ; i++ )  {
            arr[i] = arr[i+rotation];
        }

        for (int  i = limit; i < n; i++)
        {
            arr[i] = savedelements[i - (limit)];
        }
        
    }

int main()
{
        int n, rotation ;
        printf("enter n: ");
        scanf("%d", &n);

        int arr[n];
        arrinput(arr, n);
        
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

     

        printf("rotation : ");
        scanf(" %d", &rotation);

        rotate(arr, n, rotation);

        print(arr, n);

    return 0;
}