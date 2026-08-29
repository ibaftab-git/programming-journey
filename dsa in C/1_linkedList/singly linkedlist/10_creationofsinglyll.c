#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; 
    struct node *link; 
}node;

    node* addtoEmpty(node *head, int data);
    void add_at_end(node *head , int data);

    node *createlist(node *head){
        int n, data;
        printf("enter number of node :");
        scanf("%d", &n);

        if (n == 0){
            return head;
        }

        printf("enter 1st node :");
        scanf("%d", &data);
        head = addtoEmpty(head, data);

        for (int i = 2 ; i <= n; i++){
            printf("Enter %dth node :", i);
            scanf("%d", &data);
            add_at_end(head, data);
        }
        return head;
    }


    void add_at_end(node *head , int data){
        node *temp = malloc(sizeof( node));
        temp->data = data;
        node *ptr = head;
        
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
        temp->link = NULL;
    }

    node* addtoEmpty(node *head, int data){
        // creation of first node 
        node *temp = malloc(sizeof(node));
        temp->data = data;
        temp->link = NULL;
        head = temp ;
        return head;
    }

    void printlist(node *head){
        node * ptr;
        ptr = head; 
        
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }

int main()
{
    node *head;

    head = createlist(head);
    printlist(head);

    
    return 0;
}
    