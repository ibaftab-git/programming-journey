#include<stdio.h>
#include<string.h>

    int main(){

    char str [5] ;
//1st
    // gets(str); // takes input as whole sentence in index...
    // gets(str) keeps writing beyond the array boundary
    //gets() blindly reads input until newline without size checking and 
    // immediately returns an empty string if a newline already exists in the buffer.

//2nd
    // scanf("%s", str);//inputs only first word...
    // it too doesnt check the size of array...it can overflow ...

//3rd
    // scanf("%[^\n]s", str);// input full sentence
    //still no limit for boundary...
    
//4th 
    scanf("%[^\n]", str);//by chatGPT...


    printf("your input was :%s", str);

    

    return 0;
}