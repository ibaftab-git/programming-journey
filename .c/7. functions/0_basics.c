#include<stdio.h>
int sum (int a, int b){
    int sum = a +b;
    return sum; 
}
    
    int main(){
        int a, add, b;
        printf("enter a :");
        scanf("%d", &a);
        printf("enter b :");
        scanf("%d", &b);

        add = sum(a,b);
        printf("sum is %d", add);


        return 0;
    }