#include<stdio.h>
#include<stdbool.h>
int main (){
    //optimized bubble sort....

    int arr [7] = {1, 3, 4, 9, 6, 10, 2};
    int n = 7;

    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i<n-1 ; i++){
        bool flag = true; // if bool = true means data is sorted, need not to check further...

        for (int j = 0; j <  n-1-i; j++){ //j <  n-1-i we are sure after every pass the largest no will be sorted
            // so why to check till last term, by using -i, we wont go to last term after a pass. Eg, 
            //1st pass i = 1, 2nd pass i = 2, so j will go only unsorted area
            if (arr[j] > arr [j+1]){
                int temp = arr [j];
                arr [j] = arr [j+1];
                arr [j+1] = temp;
                flag = false;
            }
        }
        if (flag == true) break;
    }
    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}