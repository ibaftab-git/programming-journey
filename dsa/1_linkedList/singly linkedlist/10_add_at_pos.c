#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; 
    struct node *link; 
}node;

// this wont work for position = 1...
    // void add_at_pos(node *head, int data, int position){
    //     node *temp , *ptr2;
    //     temp = head;

    //     ptr2 = malloc(sizeof(node));
    //     ptr2->data = data;
    //     int pos = position;

    //     int i = 1;

    //     while(i != (pos-1)){
    //         temp = temp->link;
    //         i++;
    //     }
    //     ptr2->link = temp->link;
    //     temp->link = ptr2;
    // }
// we need to modify this

    void add_at_pos(node **head, int data, int position){
        node *temp , *ptr2;
        temp = *head;

        ptr2 = malloc(sizeof(node));
        ptr2->data = data;
        int pos = position;

            if(pos == 1){
                ptr2->link = *head;
                *head = ptr2;
            }

            else{
                int i = 1;
        
                while(i != (pos-1)){
                    temp = temp->link;
                    i++;
                }
                ptr2->link = temp->link;
                temp->link = ptr2;
            }
    }


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

    ptr = head; // printing the 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    add_at_pos(&head, 3, 2);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
    return 0;
}
      