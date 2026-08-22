#include<stdio.h>
#include<limits.h>
int main(){

    int arr[7]= {23, 19, 22, -19, -129};
    int max = INT_MIN; //sabse chhota number
    int smax = INT_MIN;

    for(int i = 0; i<=6; i++){
            if(max<arr[i]){
                max = arr [i];
            }
        } // from here max is 23... Now 23 goes in as max value in 2nd loop!

    for (int i=0; i<=6; i++){
        if(smax<arr[i] && max != arr[i])
            {smax = arr[i];}
        }

        printf("%d", smax);
        
   
    return 0;
}