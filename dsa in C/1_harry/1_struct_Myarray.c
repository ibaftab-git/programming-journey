#include<stdio.h>
#include<stdlib.h>


struct my_array
    {
        int Total_size;
        int Used_size; 
        int *ptr;
    };

void createArray(struct my_array * a, int tSize, int uSize){
    // (*a).Total_size = tSize;
    // (*a).Used_size = uSize;
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));
    
    a->Total_size = tSize;
    a->Used_size = uSize;
    a->ptr = (int * )malloc(tSize * sizeof(int));
}

void show(struct my_array *a){
    for (int  i = 0; i < a->Used_size; i++)
    {
        printf("%d\n, (a->ptr)[i]");
    }
     
}

void setVal(struct my_array *a){
    int n;
    for (int  i = 0; i < a->Used_size; i++)
    {
        printf("enter element %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
    
}

int main (){

    struct my_array marks; 
    createArray(&marks, 10, 2);
    printf("We are running setVal now\n");
    show(&marks);

    printf("We are running setVal now\n");
    show(&marks);
    
    return 0;
}