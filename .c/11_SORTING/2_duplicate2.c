#include<stdio.h>

    int main (){
        //find duplicate from an array....
        // by visited array method...

        int arr [10] = {6,1,7,3,2,5,4,8,9,9};
        int n = 10;

        int brr [10] = {0};

      
        for( int i = 0; i < n; i++){
            int x = arr[i];
            
            if (brr [x] == 1){  // brr[x] = 1 means visited
                printf("%d is duplicate", x); 
                break;
            }

            brr [x] = 1;

        }
        

        return 0;
    }