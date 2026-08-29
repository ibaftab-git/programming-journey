#include <stdio.h>

int main()
{

    // 1st basic mudda....
    // char *ptr = "hello world !";

    // printf("%s", ptr);
    // printf("\n%.5s", ptr);
    // printf("\n%7.5s", ptr);


    // 2nd basic mudda...
    
    int ch;
    for(ch = 'A'; ch <= 'Z'; ch++){
        putchar(ch);//only one character print with ascii value
        printf(" ");
    }

    return 0;
}