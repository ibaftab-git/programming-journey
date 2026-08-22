#include<stdio.h>
long long fact(int n){
    long long fact = 1; 
    for(int i=1; i<=n; i++){
        fact = fact * i; 
    }
    return fact;
}
long long  comb(int n, int r){
     long long comb = fact(n)/(fact(n-r)*fact(r));
    return comb;
}
    
    int main(){
        int n, r; long long combination;
        printf("enter n :");
        scanf("%d", &n);
        printf("enter r :");
        scanf("%d", &r);
        
        combination = comb(n,r);
        printf("combination is %lld", combination);


        return 0;
    }