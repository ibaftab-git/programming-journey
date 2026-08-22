#include <stdio.h>

                // int gcd(int a, int b){
                //     int r;

                //     while (b != 0){
                //         r = a % b;
                //         a = b;
                //         b = r;
                //     }
                //     return a;   // a holds HCF
                // }

                // int main(){
                //     int a, b;

                //     printf("enter a and b: ");
                //     scanf("%d %d", &a, &b);

                //     printf("HCF = %d", gcd(a, b));
                //     return 0;
                // }

                int min(int a, int b){
                    if(a>b) return a;
                    else return b;
                }
    
    int gcd(int a, int b){int hcf; 
        for(int i = 1; i<=min(a,b); i++){
            if(a%i==0 && b%i==0){
                hcf = i;
            }
        }
    return hcf;}

int main(){
            int a, b;

            printf("enter a and b: ");
            scanf("%d %d", &a, &b);
            printf("HCF is %d", gcd(a, b));
            return 0;
 }