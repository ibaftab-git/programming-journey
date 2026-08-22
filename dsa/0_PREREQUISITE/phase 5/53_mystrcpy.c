    #include <stdio.h>

    int my_strlen(char *str){
        int count = 0, i = 0;
        while(str[i] != '\0'){
            count ++;
            i++;
        }
        return count;
    }

    void my_strcpy(char *destination, char *source){

        for(int i = 0; i <= my_strlen(source); i++){
            destination[i] = source [i];
        }
    }
 n 
    void printstring(char *ptr){
        for (int i = 0; i < my_strlen(ptr); i++)
        {
            printf("%c", ptr[i]);
        }
        
    }

    int main()
    {
        char source[] = "Hello kya haal chal, kya be gandu  ";

        char copy[my_strlen(source)+1];

        my_strcpy(copy, source);

        printstring(source);
        printf("\n");
        printf(copy);

        printf("\n%d\n", my_strlen(source));
        printf("\n%d\n", my_strlen(copy));




        

      
        return 0;
    }