#include<stdio.h>

// long long fact(int n){
//     long long fact = 1; 
//     for(int i=1; i<=n; i++){
//         fact = fact * i; 
//     }
//     return fact;
//     }

//     int comb(int n, int r){
//     int comb = fact(n)/(fact(n-r)*fact(r));
//     return comb;
// }


    
    int main(){
        int n, i, j; //long long combination;
        printf("enter n :");
        scanf("%d", &n);

        
        
        for(i=0; i<=n; i++){
            int first  = 1; 
            for(j = 0; j <= i; j++){
                printf("%d ", first);
                first  = first * (i-j)/(j+1);
            }
            printf("\n");
        }


        return 0;
    }