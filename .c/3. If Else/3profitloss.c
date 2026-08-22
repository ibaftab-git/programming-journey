#include<stdio.h>
int main(){
    int c, s;
    printf("enter cost price :");
    scanf("%d", &c);
    printf("enter selling price :");
    scanf("%d", &s);
    if(c>s){
        printf("seller is in loss & that loss is %d" ,c-s);
            }
                    // else{
                    //     printf("seller is in profit & profit is %d", s-c);
                    // } bcz in this case cp=sp,  else part was running, bcz  code check for if part is correct it runs  otherwise esle part runs

            else if(s>c){
                printf("seller is in profit & profit is %d", s-c);
            }
            if (c==s){
                printf("no profit, no loss");
            }
            




    return 0;
}