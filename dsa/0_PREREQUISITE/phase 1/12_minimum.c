#include<stdio.h>


    int min(int a, int b, int c){
        if (a < b){
            if (a < c) return a;
            else return c;
        }
        else if(b < c){
            if (b < a) return b;
            else return a; 
        }
        else if(c < a){
            if (c < b) return c; 
            else return b;
        }
    }


int main(){

    int a, b, c;
    printf("enter a : enter b : enter c : ");
    scanf("%d %d %d", &a, &b, &c);

    
    int x = min(a, b, c);

    printf("min = %d", x);
  

    return 0;
}