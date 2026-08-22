#include<stdio.h>
long long fact(int n){
    long long fact = 1; 
    for(int i=1; i<=n; i++){
        fact = fact * i; 
    }
    return fact;
}
long long  permutation(int n, int r){
     long long permut = fact(n)/(fact(n-r));
    return permut;
}
    
    int main(){
        int n, r; long long nPr;
        printf("enter n :");
        scanf("%d", &n);
        printf("enter r :");
        scanf("%d", &r);
        
        nPr = permutation(n,r);
        printf("combination is %lld", nPr);


        return 0;
    }