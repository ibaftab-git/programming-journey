#include<stdio.h>
long long fact(int n){
    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact = fact * i; 
    }
    return fact;
}
    
    int main(){
        int n, add, b;
        printf("enter n :");
        scanf("%d", &n);
        
        printf("factorial is %lld", fact(n));


        return 0;
    }