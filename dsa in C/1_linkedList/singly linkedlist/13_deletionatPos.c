#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int data; 
        struct node *link; 
    }node;

    void del_at_pos(node **head, int position){
        int i = 1;
        node *prev, *curr;
        prev = curr =  *head;

        if (*head == NULL){
            printf("list is empty!\\");
        }

        else if(position == 1){
            *head = curr->link;
            free(curr);
            curr = NULL;
        }

        else{
            while( i < position){
                prev = curr;
                curr = curr->link;
                i++;
            }
            prev->link = curr->link;
            free(curr);
            curr = NULL;
        }
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

    printf("deleting at position\n");

    del_at_pos(&head, 2);
    ptr = head; // printing the ll
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    
    
    return 0;
}
      