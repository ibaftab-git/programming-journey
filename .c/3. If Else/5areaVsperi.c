#include<stdio.h>
int main(){
    int l, b;
    printf("enter length");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    int a = l*b;
    int p = 2 * (l+b);
if(a>p)    {
    printf("area is greater ");
}
else{
    printf("perimeter is greater");
}



    return 0;
}