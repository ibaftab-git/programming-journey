// #include<stdio.h>

//     int sum(int n){
//         if (n == 1 || n == 0) return n;
        
        
//         return n + sum(n-1);
//     }

// int main (){
//         int n;
//         printf("enter n : ");
//         scanf("%d", &n);
//         sum(n);
//         printf("the sum is %d", sum(n));
//         return 0;
//     }
#include<stdio.h>

    int sum(int n){
        if (n == 1 || n == 0) return n;
        int x = n + sum(n-1);        
        return x;
    }

int main (){
        int n;
        printf("enter n : ");
        scanf("%d", &n);
        sum(n);
        printf("the sum of %d is %d", n, sum(n));        
        return 0;
    }
