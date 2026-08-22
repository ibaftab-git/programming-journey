#include<stdio.h>

// Given a matrix 'a' of dimension m x n and 2 coordinates (r1, c1) and (r2, c2). 
// Return the sum of the rectangle from (r1, c1) to (r2, c2)
    int main (){

        int m, n;
        
        printf("enter matrix size m x n : ");
        scanf("%d %d", &m, &n);

        int arr[m][n];

        printf("enter the matrix elements :\n");

        for(int i = 0; i<=m-1; i++){
            for(int j = 0; j<=n-1; j++){
                 
                scanf("%d", &arr[i][j]);
            }
        }

        int r1, c1, r2, c2;
        printf("enter r1, c1 :");
        scanf("%d %d", &r1, &c1);
        
        printf("enter r2, c2 :");
        scanf("%d %d", &r2, &c2);

        int sum = 0;
// these two if condition by help of chat gpt. due to, not formed perfect rectangle , so we forcibly formed perfect rectangle 
// enter r1, c1 :1 1 
// enter r2, c2 :2 0 here we have not a perfect rectangle, we are moving backward
        if (r1 > r2) {
            int t = r1; r1 = r2; r2 = t;
        }
        if (c1 > c2) {
            int t = c1; c1 = c2; c2 = t;
        }

        for(int i = r1; i<=r2; i++){
            for(int j = c1; j<=c2; j++){
            sum += arr[i][j];
            }
        }
        printf("the sum is %d", sum);

        return 0;
    }