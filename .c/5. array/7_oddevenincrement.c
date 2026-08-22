#include<stdio.h>
int main(){

    //we have to add 10 in odd places, and multiply 2 in even places

    int i, arr[7] = {1,2,3,4,5,6,7};
    for(i=0; i<=6; i++){
        if(i%2!=0){
            arr[i] *=2; // arr[i] = 2*arr[i]
        }
        else arr[i] +=10;
    }
    for(int i= 0; i<=6; i++)printf("%d ", arr[i]);




    return 0;
}