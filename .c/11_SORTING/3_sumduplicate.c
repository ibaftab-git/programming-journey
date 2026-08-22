#include<stdio.h>

    int main (){
        //find duplicate from an array....
        // by sum..

        int arr [11] = {6,1,7,3,2,5,4,8,9,9, 10};
        int n = 10;//there are n number. 1, 2, 3..., 9, 10.
        int sum = 0;
        int TotalSum = (n*(n+1))/2;

        for (int i = 0; i <= n ; i++){
            sum += arr[i];
        }

        printf("the duplicate is :%d", sum - TotalSum);
        

        

        return 0;
    }