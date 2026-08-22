#include<stdio.h>
int main () {
    int n;
    printf("enter percentage :");
    scanf("%d", &n);
                    // if(n > 90){
                    //     printf("A Grade");
                    // }else{
                    //     if(n >75){
                    //         printf("B Grade");
                    //         }
                    //     else {
                    //         if(n > 40){
                    //         printf("C Grade");
                    //     }
                    //         else{
                    //         printf("D Grade");
                    //     }
                    //     } 

                    //     }
        if(n > 80){
            printf("A Grade ");
        }
        else if (n > 60){
            printf("B Grade");
        }
        else if (n > 33){
            printf("C Grade");
        }
        else {
            printf("Fail");
        }

return 0;
}