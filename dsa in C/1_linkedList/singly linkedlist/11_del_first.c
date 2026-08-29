#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int data; 
        struct node *link; 
    }node;

    void del_first(node **head){
        // could be done without ** double pointer
        // bt, we'll have to return head...
        node *temp ;
        temp = *head; 
        *head = (*head)->link;
        free(temp);
        temp = NULL;
    }

// used to create a linkedlist..
    struct node *add_at_end(struct node *ptr , int data){
        struct node *temp = malloc(sizeof(struct node));
        
        temp->data = data;
        temp->link = NULL;
        
        ptr->link = temp;
        return temp;
    }

int main()
{
    node *head = malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;
    
    node *ptr = head; 
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 99);
    ptr = add_at_end(ptr, 69);

    ptr = head; // printing the ll
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    del_first(&head);

    ptr = head; // printing the ll
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    
    
    return 0;
}
      