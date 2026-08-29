#include <stdio.h>
#include<string.h>

int main()
{

    //done by myself just experiment....
    // char ch[] = "Hello world !!!";
    // printf("%s", ch);

    // printf("\n");
    // for (int i = 0; i < strlen(ch); i++){
    //     printf("%c", ch[i]);   
    // }

    //2nd ...
    char *string = "the aftab";
    printf("%s\n", string);
    printf("%.10s\n", string);// dot ke baad 10  mtlb hmein string me only 1st 10 letters hi print krne hn...
    printf("%11.10s\n", string); // 11.10 -> 11 dabba banao, 10 element fill kro aur 1 right shift krdo
    printf("%12.10s\n", string);// 12.10 -> 11 dabba banao, 10 element fill kro aur 2 right shift krdo ya phir samne se 2 block khali chhod do



    


    return 0;
}