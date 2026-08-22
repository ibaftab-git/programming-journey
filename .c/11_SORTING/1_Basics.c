#include<stdio.h>

    int main (){
        //find duplicate from an array....

        int arr [11] = {6,1,7,3,2,5,4,8,9,9,10};
        int n = 11;

        for (int i = 0; i <= n-2; i++){// i <= n-2 or i < n-1...
            for ( int j = i+1; j < n; j++){ //j < n of j <= n-1...
                if (arr[i] == arr [j]) printf("duplicate is present at %dth index\n", i);
                break;
            }
        }

        return 0;
    }