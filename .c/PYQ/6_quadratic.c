#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;
    printf("enter quadratic :\n");
    printf("ax^2 + bx + c = 0\n");

    printf("a :\n");
    scanf("%d", &a);

    printf("b :\n");
    scanf("%d", &b);

    printf("c :\n");
    scanf("%d", &c);

    typedef float root ;
    root x1 = (-b + sqrt(b*b - 4*a*c))/2*a;

    root x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

    printf("x1 :%f\n", x1);
    printf("x2 :%f\n", x2);


    return 0;
}








