#include<stdio.h>

    int main (){
       
        int arr [10] = {0, 2, 3, 4, 5, 7, 7, 9, 9, 10};
        int tGt = 8; // sum target...
        int n = 10;

        int i = 0, j = n-1;
        while (i < j){
            if (arr [i] + arr [j] == tGt) {
                printf("found at i = %d, & j = %d th index\n", i, j);
                break;
            }

            if (arr[i] + arr [j] < tGt){
                i++;
            }

            if (arr[i] + arr [j] > tGt){
                j--;
            }
        }
        

        

        return 0;
    }