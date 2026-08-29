#include <stdio.h>

    int my_strlen(const char *str){
        int count = 0, i = 0;
        while(str[i] != '\0'){
            count ++;
            i++;
        }
        return count;
    }

    char* my_strcat(char *string1,const char *string2){

       
        int len1 = my_strlen(string1);
        int len2 = my_strlen(string2);

        for(int i = 0; string2[i] != '\0'  ; i++ ){
            string1[len1 + i] = string2[i];
        }

        string1[len1 + len2 ] = '\0';

        return string1;
    }
    
    
    int main()
    {
        
    char s1[] = "hello ";
    char s2[] = "kya be gandu";

    printf("%s", my_strcat(s1, s2));


        return 0;
    }