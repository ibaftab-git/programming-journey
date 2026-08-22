#include<stdio.h>
#include<string.h>

    int main(){

        char s1 [] = "you just want attention";
        char *s2 = s1;    // ptr is shallow copy...
        s1 [0] = 'P';
        printf("%s\n", s1);
        // Shallow copy copies the address...
        // if we do changes in address, it will change

        // deep copy...
        // Deep copy copies the actual data.
        char s3 [] = "you just want attention"; 
        s3 [0] = 'P';
        printf("%s", s2);


    return 0;
}