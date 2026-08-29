#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;

    void count_of_nodes(struct node *head){
        int count = 0;
        if(head == NULL){
            printf("linkeslist is empty");
        }
        node *ptr = NULL ; 
        ptr = head;
        while (ptr != NULL){
            count++;
            ptr = ptr->link;
        }
        printf("%d", count);
    }

int main()
{
    // Create Node #1
    struct node *head = malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;


    // Create Node #2
    struct node *current = malloc(sizeof(struct node));

    current->data = 98;
    current->link = NULL;


    // Connect Node #1 → Node #2
    head->link = current;


    // Create Node #3
    current = malloc(sizeof(struct node));

    current->data = 3;
    current->link = NULL;


    // Connect Node #2 → Node #3
    head->link->link = current;

    // creating Node 4 on my own
    current = malloc(sizeof(node));
    current->data = 69;
    current->link = NULL;

    head->link->link->link = current;


    count_of_nodes(head);

    return 0;
}