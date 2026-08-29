#include <stdio.h>
#include <stdlib.h>

    typedef struct node
    {
        int data;
        struct node *link;
    }node;

    void add_at_BEG(node **head, int data){

        node *tmp = malloc(sizeof(node));
        tmp->data = data;
        tmp->link = *head;

        *head = tmp;
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

    // calling the function, with add of head (&head)

    print_linklist(head);
    add_at_BEG(&head, 3);   
    print_linklist(head);
    



    return 0;
}