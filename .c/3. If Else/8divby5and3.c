#include<stdio.h>
int main () {
int n;
printf("enter n :");
scanf("%d", &n);
            //             // if(n%5==0 && n%3==0){
            //             //     printf("%d is divisible by 5 and 3", n);
            // }
        // 2nd method
        if(n%15==0){
            printf("%d is divisible by 5 and 3", n);
                }
                else{
                    printf("the entered number %d it's not divisible by 3 & 5", n);
                }
    return 0;
}