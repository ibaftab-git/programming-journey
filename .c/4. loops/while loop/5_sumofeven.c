#include<stdio.h>
int main () {

    int n, x ,sum = 0;
    printf("enter num :");
    scanf("%d", &n);
    while (n!=0){
        x = n%10;
        if (x%2 == 0){
            sum = sum + x;
        }
        n = n/10;
    }
    printf("sum of even digit is %d", sum);

    return 0;
}