#include <stdio.h>
#include <string.h>

    int input(char str[], int n){
        int ch, i = 0;
        printf("enter your strings \n");
        while ((ch = getchar()) != '\n'){
            // getchar is used to take input but only one charachter 
            // only one integer at a time such as :- 'a' , '\n', 'A', etc....
            // it stores ascii value of every character...
            if(i < n){
                str[i++] = ch;

            }
            str[i] = '\0'; // bcz if i enter less than 12 then it will enter garbage value as it enters null char at 12th position...
        }
        return n; 
    }

int main()
{
    char str[100];
    int n = input(str, 12);

    printf("%d %s", n, str);


    return 0;
}

