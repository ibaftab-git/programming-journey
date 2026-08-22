#include <stdio.h>

    void arrinput(int *arr, int n, char name[]){
    printf("enter the %d element in the array %s :", n, name);
        for (int  i = 0; i <n; i++)
        {
            scanf("%d", &arr[i]);
        }
    
    }


    int frequency(int *arr, int n, int key){
            int count = 0;
            for (int i = 0; i < n; i++){
                if( arr[i] == key)
                count ++;
            }
            return count ; 
        }

    int main()
    {
    int n, key ;
        printf("enter n: ");
        scanf("%d", &n);

        int arr[n];
        arrinput(arr, n, "arr");
        
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        printf("key : ");
        scanf(" %d", &key);

        int x = frequency(arr, n, key);

        printf("%d times", x);

        return 0;
    }



    