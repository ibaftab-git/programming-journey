#include<stdio.h>

    // void count(int n){
    //     if(n == 0) return;
    //     count(n-1);
    //     printf("%d \n", n);        
    // }

void count(int n){
        if( n == 0) return;
        printf("%d\n", n);
        count(n-1);
        printf("%d \n", n);    //Anything written AFTER a recursive call executes ONLY while returning.                   
    }

    int main(){
        int n;
        printf("enter n :");
        scanf("%d", &n);
        count(n);
        return 0;
    }