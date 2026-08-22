#include<stdio.h>
#include<string.h>

    int main(){

char str [] = "John banega don";
char *ptr = str;
*ptr = 'Z';
// Before: J o h n banega don
// After : Z o h n banega don

printf("%s", str);


    return 0;
}