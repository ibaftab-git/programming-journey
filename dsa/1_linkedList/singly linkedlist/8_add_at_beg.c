#include <stdio.h>
#include <stdlib.h>

    typedef struct node
    {
        int data;
        struct node *link;
    }node;

    struct node *add_at_beg(node *head, int data){
        node *ptr = malloc(sizeof(node));
        ptr->data = data;
        ptr->link = head;

        head = ptr;
        return head;

    }

    

    void print_linklist(struct node *head){
        if(head == NULL) {
            printf("linked list is empty");
            return;
        }

        node *ptr = NULL; // struct node *ptr == node *ptr, where it shows that ptr is having address of struct type...
        ptr = head ;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);        
            ptr = ptr->link;
        }
        printf("\n");   
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

    // here while calling we are passing the address of 1st node 
    // stored in head pointer, and the function return address of new head that have been changed, 
    // so we have to assign into old head, 
    // im going to do with another mthd in which i'll pass the address of head pointer &head, and perform operation wthout returning the add...

    head = add_at_beg(head , 3);  
    head = add_at_beg(head, 69);

    print_linklist(head);

    head = add_at_beg(head, 45);
    print_linklist(head);

    return 0;
}