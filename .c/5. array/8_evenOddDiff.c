#include<stdio.h>
int main(){

    // find difference between even place and odd places sum of digits

   int i, sumeven=0, sumodd=0,  arr[6] = {1,2,3,4,5,6};

   for(i=0; i<=5; i++){
    if(i%2 == 0){
        sumeven += arr[i];
    }
    else sumodd += arr[i];
   } 

   printf("diff is %d", sumeven - sumodd);


    return 0;
}