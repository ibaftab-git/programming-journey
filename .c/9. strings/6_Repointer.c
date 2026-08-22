#include<stdio.h>
#include<string.h>

    int main(){

// char str [] = "John banega don";
// char *ptr = str;
// *ptr = 'Z';

//         printf("%s", str);

char *ptr = "Ideapad gaming"; 
printf("%s\n", ptr);
printf("address is : %p\n", ptr); // ptr is address of string...
printf("address of pointer variable itself is : %p\n", &ptr);


ptr = "Lenovo Ideapad Gaming";
 
printf("\n%s\n", ptr); // pointer value is changed...not string
printf("address is : %p\n", ptr); // ptr is address of string...
printf("address of pointer variable itself is : %p\n", &ptr);

ptr = "My laptop "; // pointer value is changed...not string
printf("\n%s\n", ptr);

    return 0;
}