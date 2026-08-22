#include<stdio.h>
int main () {
int a, b, c;
printf("enter a :");
scanf("%d", &a);

printf("enter b :");
scanf("%d", &b);

printf("enter c :");
scanf("%d", &c);
                // if(a < b ){
                //     if ( a < c){
                //         printf("%d is smallest", a);
                //                 }
                //     else{ //a>c -> c > a > b
                //         printf("%d is smallest ", c);

                //     }
                // }
                // else{ //b<a
                //     if(b < c){
                //         printf("%d is smallest ", b);
                //     }
                //     else{
                //         // c < b -> c < b < a
                //     printf("% d is smallest ", c);
                // }
                //         } 2nd method
        if(a < b){ 
            if (a < c){ 
                printf("a is smallest");
                        }
            else{ // a > c 
                printf( "c is smallest ");

            }
        }
        else{ // a > b 
            if(b < c ){
                printf("b is smallest");
            }
            else{ // c < b 
                printf(" c is smallest");

            }
        }


return 0;
}