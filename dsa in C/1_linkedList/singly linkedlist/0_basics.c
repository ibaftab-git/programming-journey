#include <stdio.h>
#include <stdlib.h>
// we are going to use self refrential structure 
// which will call itself, for next node
// creating a node in c...
    typedef struct node{
        int data; 
        struct node *link; 
    } node;

int main()
{
    struct node *head = NULL; // struct node = node, bcz of typedef
    head = malloc(sizeof(struct node));

    (*head).data = 45; // head->data as same is this line
    (*head).link = NULL;
    
    printf("%d \n%p", head->data, head->link);

    return 0;
}