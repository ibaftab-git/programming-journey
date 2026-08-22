#include<stdio.h>
int main(){
    int  x, y;

    printf("enter x, y :");
    scanf("%d %d", &x, &y);

    // if((x > 0 || x < 0) && y == 0){
     if(x != 0 && y == 0){
        printf("the coordinate lies on X axis");
    }
    else if (y != 0 && x == 0){
        printf("the coordinate lies on y axis");
    }
    else if (x == 0 && y == 0 ){
                printf("at origin");
    }
    else{
        printf("does not lies on x or y axis");
    }
    return 0;
}