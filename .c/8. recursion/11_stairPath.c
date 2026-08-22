#include<stdio.h>

// The No's of Ways for staring up to nth stair, we can use 1 step, 2 step, and 3 step at a time    
int TotalWays(int n ){
        if (n == 0 || n == 1 )return 1;
        if (n == 2)return 2; 
        return TotalWays(n-1) + TotalWays(n-2) + TotalWays(n-3);
    }

int main (){
    int n;
    printf("enter n :");
    scanf("%d", &n);
    printf("%d", TotalWays(n));
    return 0;
}