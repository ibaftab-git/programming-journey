#include<stdio.h>
#include<string.h>

    int main(){
// 1st 
   char str [] = "John banega don"; 
   char *ptr = str;
   ptr  = "main hun don";

// // 2nd
// char *ptr = "mere mitron"; // we can change string using ptr
// ptr = "kya haal chal";

   printf("%s", ptr);


    

    return 0;
}