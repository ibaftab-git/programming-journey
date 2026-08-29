#include <stdio.h>
#include <stdlib.h>


    typedef struct node{
            int data; 
            struct node *link;
        }node;

        
int main()
{
    node *head = malloc(sizeof(node)); 
    head->data = 45; 
    head->link = NULL; 
    
    node *current = malloc(sizeof(node));
    current->data = 98;
    current->link = NULL; 
    head->link = current; 

    current = malloc(sizeof(node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; 
    // by doing this we go inside the 1st node, then 2nd node is assigned current address

    return 0;
}