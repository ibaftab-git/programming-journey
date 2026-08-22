#include<stdio.h>

    void greeting (int n){
        if (n == 0) return;
        printf("hello hello nzren screen pr\n");
        greeting(n-1);
        return;
    }

int main(){   
int n;
    printf("enter n :");
    scanf("%d", &n);
    greeting(n);

    
   
    return 0;
}
