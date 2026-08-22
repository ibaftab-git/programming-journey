#include<stdio.h>
#include<string.h>

    typedef struct pokemon {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[40];
    } pokemon;

    int main (){

        pokemon a, b;
        a.attack = 60;
        a.hp = 200;
        a.speed = 100;
        a.tier = 'A';
        strcpy(a.name, "Blastoise");

        b = a;
        b.attack = 70;
        printf("%s\n", b.name);
        printf("%d\n", b.attack);
        printf("%d", a.attack);

        return 0;
    }

    
    