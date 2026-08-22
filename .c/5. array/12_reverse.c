#include<stdio.h>
#include<limits.h>
int main(){

    
    int arr[7]= {23, 19, 22, -19, -129, 55,65};
    int brr[7];
    // int max = INT_MIN; //sabse chhota number
    for (int i = 0; i<=6; i++){
        brr[i] = arr[6-i]; //1st term = n-1,2,3..so it would be n-i
        printf("%d ", brr[i]);
    }   
        
   
    return 0;
}