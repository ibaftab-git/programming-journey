#include <stdio.h>
#include <stdlib.h>
// im using node in place of struct node 
// while performing malloc , node is used
    typedef struct node{
        int data; 
        struct node *link;
    }node;

int main()
{
    node *head = malloc(sizeof(node)); // head contains int data , link..
    head->data = 11; // it means dereference head and point to that location of node
    head->link = NULL; // so in node data is assigned and link is null
    
    node *current = malloc(sizeof(node));
    current->data = 22;
    current->link = NULL; 
    head->link = current; 

    return 0;
}