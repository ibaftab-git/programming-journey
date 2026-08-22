#include<stdio.h>

    int maze( int cr, int cc, int er , int ec){
        int rightWays = 0;
        int downWays = 0;
        if ( cr == er && cc == ec) return 1;
        if ( cr == er){
            rightWays += maze(cr, cc+1, er, ec);
        }
        if ( cc == ec){
            downWays += maze(cr + 1,cc, er, ec );
        }
        if (cr<er && cc < ec){
            rightWays += maze(cr, cc+1, er, ec);
            downWays += maze(cr + 1, cc, er, ec);
        }
        return rightWays + downWays;

    }

    int main(){
        int m, n; // m = row, n = column
        printf("enter m :");
        scanf("%d", &m);
        printf("enter n :");
        scanf("%d", &n);

        int x = maze(1, 1, m, n);
        printf("%d", x);

        return 0;
    }