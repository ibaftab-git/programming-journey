#include<stdio.h>
#include<stdbool.h>

int main(){

    int arr[7] = {12, 21 ,22 , 42, 21, 6, 7};
    int x = 21;
    int index = -1;
    bool flag = false; // false means not present ......

    for(int i = 0; i<=6; i++){
        if( x == arr[i]){
            index = i;
            flag = true;
            printf("the number is present & index is %d\n", index); 
        }   // if number is found multiple times it will print that no of times.....
    }

    if (flag == false ) printf("the number is not present in array");
     

    return 0;
}