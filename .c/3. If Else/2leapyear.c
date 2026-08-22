#include<stdio.h>
    int main(){
        int y; //year
    
        printf("enter year in 4 digit :");
        scanf("%d", &y);
        if(y%4==0){
            printf("%d is leap year ", y);
        }
        else{
            printf("%d is regular year, means %d has 365 days", y, y);
        }






        return 0;
    }