#include<stdio.h>
int main (){

    int n; 
    printf("enter n :");
    scanf("%d", &n);

    if(n%2 != 0){
       for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n ; j++){
            int a = n/2 +1; 
            if(i == j || i+j == n+1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
     
    }
}

    else printf("there will not be formation of a perfect cross pattern in even input");

    

    return 0;
}