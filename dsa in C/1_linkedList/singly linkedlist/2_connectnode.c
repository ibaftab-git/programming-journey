#include <stdio.h>
#include <stdlib.h>


    typedef struct node{
            int data; 
            struct node *link;
        }node;

        /*summary
        head is storing address of first node
        1st head is derefrenced to point to assign the value in data of node
        current is having the next node
        in head->link we assign current , means inside head link address of current is stored
        same for current 2  
        */
int main()
{
    node *head = malloc(sizeof(node)); 
    head->data = 45; 
    head->link = NULL; 
    
    node *current = malloc(sizeof(node));
    current->data = 98;
    current->link = NULL; 
    head->link = current; 

    // we are creating another *current2 to point current, which will point to current and create a link between them
    
    node *current2 = malloc(sizeof(node));
    current2->data = 3; 
    current2->link = NULL;
    current->link = current2;



    return 0;
}