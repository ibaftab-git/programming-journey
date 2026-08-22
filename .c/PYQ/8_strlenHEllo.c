#include<stdio.h>
#include<string.h>
int main (){


    for(int i = 1; i<=strlen("Hello"); i++){
        printf("%.*s \n", i, "Hello");
    }


    return 0;
}