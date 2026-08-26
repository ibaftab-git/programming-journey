#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
    }node;

    node * circularDoubly(int data){
        node * tmp = malloc(sizeof(node));

        tmp->data = data;
        tmp->next = tmp;
        tmp->prev = tmp;
        return tmp ;
    }

int main()
{
    node *tail;
    int data = 25;
    
    tail = circularDoubly(data);
    
    printf("%d", tail->data );
    return 0;
}