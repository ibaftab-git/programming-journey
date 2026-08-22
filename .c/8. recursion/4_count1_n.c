#include<stdio.h>

    // void count(int n){
    //     if(n == 0) return;
    //     count(n-1);
    //     printf("%d \n", n);        
    // }

void count(int x, int n){
        if(x > n) return;
        printf("%d \n", x);
        count(x+1, n);
                
    }

    int main(){
        int n;
        printf("enter n :");
        scanf("%d", &n);
        count(1, n);
        return 0;
    }