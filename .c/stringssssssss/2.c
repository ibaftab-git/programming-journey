#include<stdio.h>
#include<string.h>

int main (){
    
    char s1 [] = "Hello ";
    char s2 [] = "Mitron";
    char s3 [500];
    
    //strcat..
    // puts(strcat(s1, s2)); // now s1 is changed to "Hello Mitron"
    // printf("\n");

    //strlen..
    printf("The length of s1 is %d, & s2 is %d", strlen(s1), strlen(s2));

    printf("\n\nthe reverse of s1 is :\n"); 
    puts(strrev(s1)); 
    printf("\n");

    puts(strcpy(s3,  s1));

    



    return 0 ;
}