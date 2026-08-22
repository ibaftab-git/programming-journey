#include<stdio.h>

    void count (int n){
        if (n == 0) return;
        printf("%d\n", n);
        count(n-1);
        return;
    }

int main(){   
int n;
    printf("enter n :");
    scanf("%d", &n);
    count(n);

    
   
    return 0;
}
