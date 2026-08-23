#include <stdio.h>
#include <stdlib.h>

    typedef struct node {
        struct node *prev;
        int data;
        struct node *next;
    }node;

int main()
{
    node *head = malloc(sizeof(node));
    head->prev = NULL;
    head->data = 45;
    head->next = NULL;
    return 0;
}