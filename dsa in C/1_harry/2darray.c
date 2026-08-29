#include <stdio.h>
//about their addresses.........
        // int main()
        // {
        //     int arr[3][4];

        //     printf("arr        = %p\n", (void *)arr);
        //     printf("arr + 1    = %p\n", (void *)(arr + 1));

        //     printf("arr[0]     = %p\n", (void *)arr[0]);
        //     printf("arr[0] + 1 = %p\n", (void *)(arr[0] + 1));

        //     return 0;
        // }
//2nd


void test(int rows, int cols, int arr[rows][cols])
{
    printf("sizeof(arr) = %zu\n", sizeof(arr));
}

int main()
{
    int matrix[3][4];

    printf("sizeof(matrix) = %zu\n", sizeof(matrix));

    test(3, 4, matrix);
}