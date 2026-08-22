#include<stdio.h>
int main (){

    int n; 
    printf("enter n :");
    scanf("%d", &n);

//odd square...
    // for(int i = 1; i<=n; i++){
    //     for (int j = 1; j<=2*n-1; j+=2){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

// odd triangle...|my logic|
    for(int i = 1; i<=n; i++){
            for (int j = 1; j<=2*i-1; j+=2){
                printf("%d ", j);
            }
            printf("\n");
        }

// by teacher ...
    for(int i = 1; i<=n; i++){
        int a = 1;
            for (int j = 1; j<=i; j+=1){
                printf("%d ", a);
                a+=2;
            }
            printf("\n");
        }



    return 0;
}