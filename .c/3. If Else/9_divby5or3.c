#include<stdio.h>
int main () {
int n;
printf("enter n :");
scanf("%d", &n);
 if(n%3==0 || n%5==0){
    printf("the number is div by 3 or 5");
 }
 else{
    printf("%d is neither div by 3 nor 5", n);
 }
    return 0;
}   