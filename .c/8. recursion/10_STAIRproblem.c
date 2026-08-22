#include<stdio.h>

    int stair(int n ){
        if (n == 0 || n == 1)return 1;
        int x =  stair(n-1) + stair (n -2); // logic was good
        return x ;
    }
// We want to reach the nth stair (final goal).
// We assume we are already on stair n and think backward.
// The last move to reach n can be:
// 1) a 1-step from stair n-1, or
// 2) a 2-step from stair n-2.
// Every way to reach n-1 followed by 1 step,
// and every way to reach n-2 followed by 2 steps,
// gives a unique way to reach n.
// Therefore:
// ways(n) = ways(n-1) + ways(n-2)


int main(){
    int n; // one and two steps are allowed
    printf("enter n :");
    scanf("%d", &n);    
    int p = stair(n);
    printf("the number of ways to reach %dth stair is %d",n, p);
    return 0;
}

    