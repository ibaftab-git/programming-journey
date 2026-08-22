#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void memory_hog()
{
    int size = 2500000;   // 250,000 integers ≈ 1 MB

    int *a = malloc(sizeof(int) * size);

    if (a == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        a[i] = i;
    }
}

int main()
{
    int count = 0;

    while (1)
    {
        memory_hog();

        count++;

        if (count % 100 == 0)
        {
            printf("Allocations: %d\n", count);
        }

        Sleep(100);
    }

    return 0;
}