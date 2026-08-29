#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int data;
        struct node *next;
    }node;

    node * circulatsingly(int data){
        node * tmp = malloc(sizeof(node));

        tmp->data = data;
        tmp->next = tmp;
        return tmp ;
    }

int main()
{
    node *tail;
    int data = 25;
    
    tail = circulatsingly(data);
    
    printf("%d", tail->data );
    return 0;
}