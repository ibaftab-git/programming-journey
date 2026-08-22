#include<stdio.h>
int main (){

    
    int n; 
    printf("enter n =");
    scanf("%d", &n);
    int nsp = n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= nsp; j++){
            printf(" ");
        } 
        nsp --;
        int a = 64;
        for(int k = 1 ;k<= i; k++ ){
            a++;
            char ch = (char)a;
            printf("%c", ch);
        }
        printf("\n"); 
    }
    return 0;
}