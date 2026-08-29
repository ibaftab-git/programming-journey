    #include <stdio.h>

    int my_strlen(char *str){
        int count = 0, i = 0;
        while(str[i] != '\0'){
            count ++;
            i++;
        }
        return count;
    }



    int main()
    {
        char check[] = "Hello";


        // my_strlen(check);

        printf("%d", my_strlen(check));
        return 0;
    }