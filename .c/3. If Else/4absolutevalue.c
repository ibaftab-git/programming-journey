#include<stdio.h>
int main(){
    int x;
    printf("enter x :");
    scanf("%d", &x);
    if(x<0){
        printf("absolute value is %d", x*(-1)); //or i can create a extra variable y=x* (-1), print value is %d, y;
    }
else{
    printf("absolute value is %d", x);
    
}




    return 0;
}