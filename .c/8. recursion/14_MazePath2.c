#include<stdio.h>

    int maze(int m, int n){
        int rightWays = 0;
        int downWays = 0;
        if (m == 1 && n == 1 ) return 1;
        if ( m == 1){
            rightWays += maze( m, n-1);
        }
        if ( n == 1){
            downWays += maze (m-1, n);
        }
        if (m > 1 && n > 1 ){
            rightWays += maze(m, n-1);
            downWays += maze(m-1, n);
        }
        return rightWays + downWays;
    }



int main(){
        int m, n; // m = row, n = column
        printf("enter m :");
        scanf("%d", &m);
        printf("enter n :");
        scanf("%d", &n);

        int x = maze(m, n);
        printf("%d", x);

        return 0;
    }