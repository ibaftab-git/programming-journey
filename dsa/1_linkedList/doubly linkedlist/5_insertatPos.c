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

    void addAtEnd(node *head, int data){
        node *ptr = malloc(sizeof(node));
        node *temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = ptr;
        ptr->prev = temp;
        ptr->data = data;
        ptr->next = NULL;

    }

    void addAtpos(node* head , int data, int position){
        node *temp = malloc(sizeof(node));
        node *ptr  = head;
        int i = 1;

        while(i != position){
            ptr = ptr->next;
            i++;
        }

        temp->next = ptr->next;
        temp->data = data;
        temp->prev = ptr;
        temp->next->prev = temp;
        ptr->next = temp;
    }

int main()
{
    node *head = NULL;
    head = addToEmpty(head, 45);
    head = addAtBeg(head, 34);
    addAtEnd(head, 55);
    addAtpos(head, 59, 2);



    node *ptr = head; // for printing the linklist
    while(ptr != NULL){
        printf(" %d ", ptr->data);
        if(ptr->next != NULL) printf("<->");
        ptr = ptr->next;
    }
    
    return 0;
}