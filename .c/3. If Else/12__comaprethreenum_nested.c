#include<stdio.h>
int main () {
int a, b, c;
printf("enter a, b, c :");
scanf("%d %d %d", &a, &b, &c);
            //  1st  if(a>b){
            //         if(a>c){
            //             printf("a is greatest");
            //         }
            //        }
            //        if(b>c){
            //         if ( b > a ){
            //             printf(" b is greatest");
            //                         }
            //        }
            //        if (c > b){
            //         if (c > a){
            //             printf("c is greatest");
            //         }
            //        }
                          // 2nd
                                    // if(a > b){
                                    //     if( a > c){
                                    //         printf("%d is greatest ", a);
                                        
                                    //     }
                                    //     else{ // a < c
                                    //         printf("%d is greatest", c);
                                    //     }
                                    // }
                                    // else{ //b > a
                                    //     if(b > c){
                                    //         printf("%d is greatest", b);
                                    //     }
                                    //     else{ // b < c
                                    //         printf("%d is greatest", c);
                                    //     }

                                    // }
        if(a > b){
            if( a > c){printf("a is greatest");}//a
            else{printf("c is greatest");}//c
        }
        else{
            if( b > c){printf("b is greatest ");}
            else{printf("c is greatest ");}
        }

    


    return 0;
}   