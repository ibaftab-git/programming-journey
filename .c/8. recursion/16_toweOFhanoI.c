#include<stdio.h>

    void tower(int n, char s, char h, char d){   //s >- source, h >- helper, d >- destination
        if (n==0)return;
        tower(n-1, s, d, h);
        printf("%c -> %c\n", s, d);
        tower(n-1, h, s, d);
        
    }

    int main (){
        int n;
        printf("enter the number of disks :");
        scanf("%d", &n);
        tower(n, 'A', 'B', 'C'); // A >- rod A, B >- rod B, C >- rod C
        return 0;
    }