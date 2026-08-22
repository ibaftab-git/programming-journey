#include<stdio.h>
int main(){
    int n;
    // the number should be div by 3 or 5 but not 15
    printf("enter n  :");
    scanf("%d", &n);
                        // 1st method, if(n%3==0 || n%5==0){
                        //         if(n%15!=0){
                        //         printf("the number %d is div by 3 or 5 but not by 15", n);
                        //         }
                        // else{
                        //         printf("the number is div by 15");
                        //     }
                        // }
    if((n % 3 == 0 || n % 5 == 0) && n % 15 != 0){
        printf("the number is div by 3 or 5 but not by 15");
    }
    else{
        printf("the number is div by 15");
    }
    return 0;
}   