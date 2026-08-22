#include<stdio.h>
int main () {
        int a, b;
        printf("enter a :");
        scanf("%d", &a);
            printf("enter b :");
            scanf("%d", &b);

        int q = a/b;// q is quotient
        int r = a-(b*q);//r is remainder
            printf("The remainder when %d is divided by %d is : %d",a,b,r );

    return 0;
}