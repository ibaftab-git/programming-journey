#include <stdio.h>
#include <stdlib.h>

    typedef struct node {
        struct node *prev;
        int data;
        struct node *next;
    }node;

    node *addToEmpty(node*head, int data){
        node *temp = malloc(sizeof(node));
        temp->prev = NULL;
        temp->data = data;
        temp->next = NULL;
        head = temp ;
        return head;
    }
    node *addAtBeg(node *head, int data){
        node *temp = malloc(sizeof(node));
        temp->prev = NULL;
        temp->data = data;
        temp->next = head; 
        head->prev = temp;
        head = temp;
        return head;
    }

int main()
{
    node *head = NULL;
    head = addToEmpty(head, 45);
    head = addAtBeg(head, 34);

    node *ptr = head; // for printing the linklist
    while(ptr != NULL){
        printf("%d", ptr->data);
        if(ptr->next != NULL) printf("->");
        ptr = ptr->next;
    }
    
    return 0;
}