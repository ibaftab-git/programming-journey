    #include<stdio.h>
    #include<string.h>

        // struct pokemon{
        //     int hp;
        //     int attack;
        //     char tier;
        //     char name [30];
        // };
        //both will work...

        
        int main (){

            struct pokemon{
            int hp;
            int attack;
            char tier;
            char name [30];
        };


        struct pokemon pikachu;
        pikachu.attack = 80;
        pikachu.hp = 100;
        pikachu.tier = 'A';
        strcpy(pikachu.name, "pikachu");

        printf("%s\n", pikachu.name);
        printf("%d\n", pikachu.attack);
        printf("%d\n", pikachu.hp);
        printf("%c\n", pikachu.tier);
        

            return 0;
        }