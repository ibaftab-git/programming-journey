#include<stdio.h>
#include<string.h>

    typedef struct pokemon {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[40];
    }pokemon;

    typedef struct legendarypokemon {
        pokemon normal;
        char ability[20];        
    }legendary;

    int main (){

        pokemon a;
        a.attack = 60;
        a.hp = 200;
        a.speed = 100;
        a.tier = 'A';
        strcpy(a.name, "Blastoise");

        legendary c;
        // c.ability = 
        strcpy(c.ability, "Extra damage");
        c.normal.attack =60;
        c.normal.hp = 100;
        c.normal.speed = 150;
        c.normal.tier = 'G';
        strcpy(c.normal.name, "Jod");

        
        printf("%s\n", c.normal.name);
        printf("%s\n", c.ability);
        printf("%d", c.normal.attack);

        return 0;
    }

    
    