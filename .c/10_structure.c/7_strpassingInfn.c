#include<stdio.h>
#include<string.h>

    typedef struct pokemon {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[40];
    }pokemon;

    void access (pokemon a){
        printf("%s\n",a.name);
        printf("%d\n",a.attack);
        printf("%d\n",a.hp);
        printf("%c\n",a.tier);
        
    }
    

    int main (){

        pokemon a;
        a.attack = 60;
        a.hp = 200;
        a.speed = 100;
        a.tier = 'A';
        strcpy(a.name, "Blastoise");

        access(a);

        

        return 0;
    }

    
    