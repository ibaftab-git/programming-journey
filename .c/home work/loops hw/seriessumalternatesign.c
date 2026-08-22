#include<stdio.h>
int main(){

    // Print the sum of this series :1 - 2 + 3 - 4 + 5 - 6... upto ‘n’.

    // int n;
    // printf("enter last term :");
    // scanf("%d", &n);

    // if(n%2 == 0)printf("the sum will be %d", -n/2);
    //     else printf("the sum will be %d", (-n/2) + n );

    int n,r,  sum = 0;
    printf("enter last term :");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if (i%2 == 0){
           r = -(i);
        } else {r = i;}
        sum = sum + r;
    }
    printf("the sum will be %d", sum );



    return 0;
}