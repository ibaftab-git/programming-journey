#include<stdio.h>
#include<string.h>

    typedef struct pokemon {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[40];
    }pokemon;

    void change (pokemon *p){// (*p)is used for changins, p-> = (*p)
        // (*p).attack = 70; 
        // (*p).hp = 250;
        // (*p).speed = 200;
        // (*p).tier = 'G';
        // strcpy((*p).name, "Tortoise");
        p->attack = 70;
        p->hp = 250;
        p->speed = 200;
        p->tier = 'G' ;
        strcpy(p->name, "The JoD");
    }
    

    int main (){

        pokemon a;
        pokemon *x = &a;
        a.attack = 60;
        a.hp = 200;
        a.speed = 100;
        a.tier = 'A';
        strcpy(a.name, "Blastoise");

        change( &a );

        printf("%s\n",a.name);
        printf("%d\n",a.attack);
        printf("%d\n",a.hp);
        printf("%c\n",a.tier);

        

        return 0;
    }

    
    