    #include <stdio.h>
    #include <string.h>

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
 
    void printstring(char *ptr){
        for (int i = 0; i < my_strlen(ptr); i++)
        {
            printf("%c", ptr[i]);
        }
        
    }

    int my_strcmp(char *string1, char *string2){

        int i = 0;
        while(string1[i] != '\0' || string2[i] != '\0'){
            int cmp = string1[i] - string2[i];
            if(cmp == 0){
                i++;
            }
            else if(cmp > 0){
                return cmp;
            }
            else if(cmp < 0){
                return (cmp);
            }
        }
        return 0 ;
    }
 

    int main()
    {
        char s1[] = "hel";
        char s2[] = "hell";

        

       
        
        printf("%d", my_strcmp(s1, s2));


        

      
        return 0;
    }