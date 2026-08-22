#include<stdio.h>

    // int sum(int n, int s){
    //     if (n == 0){ return s;}
    //     return sum(n-1, s+n);
    //     }

    // int main(){
    //     int n;
    //     printf("enter n :");
    //     scanf("%d", &n);
    //     int result = sum(n, 0);
    //     printf("the sum of first %d is %d", n, result);

    // 2nd :->

    void sum(int n, int s){
        if (n == 0){ printf("sum is %d", s);
        return;}
        sum(n-1, s+n);
        return ; 
        }

    int main(){
        int n;
        printf("enter n :");
        scanf("%d", &n);
        sum(n, 0);  //void doesnt return any value, so it could not be stored.
        // printf("the sum of first %d is %d", n, result)
        
        return 0;
    }