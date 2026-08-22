#include<stdio.h>
int main () {
int n;
printf("enter n :");
scanf("%d", &n);
if(n>99 && n<1000){
    printf("the entered number %d is three digit number", n);
}
else {
    printf("not a three digit number");
}

    return 0;
}