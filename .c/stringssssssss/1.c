#include<stdio.h>
#include<string.h>

void printstr(char str[]){

    int i = 0;
    printf("using function calling : -> ");
    while(str[i] != '\0' ){
        printf("%c", str[i]);
        i++;
    }
}

int main (){

    // char str[] = {'R', 'a', 'j', 'u', '\0'};
    // char str[] = "Raju"; // another way for input...

    //taking input ... using gets...

    char str[111]; 
    printf("taking input via gets :\n");
    gets(str); // gets is outdated....
    // printf("%s", str);



//  // print method 1.... here printed only 4 chars bcz i've enter i<4, so we have to change it,
//  and tell them proper length of string, using strlen...

    printf("\nusing for loop : \n");     
    for(int i = 0; i<= strlen(str); i++){
        printf("%c", str[i]);
    }
    printf("\n");


    printf("\nusing for loop and null character : \n");     
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n\n");



    printstr(str);

    return 0;
}