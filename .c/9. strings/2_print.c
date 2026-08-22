#include<stdio.h>
#include<string.h>

    int main(){

    // char str[] = {'h', 'e', 'l', 'l', 'o'};

    // for(int i = 0; i <= 4; i++){
    //     printf("%c", str[i]);
    // }

    //print by string 
    char str [] = "nazren screen par";
    printf("%s\n", str); // %s is for string without indexing...
    
    //print by loops...
    int i = 0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }

    return 0;
}