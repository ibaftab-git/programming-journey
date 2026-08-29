#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; 
    struct node *link; 
}node;

    node* addtoEmpty(node *head, int data);
    void add_at_end(node *head , int data);

        void swapnodedata(node *head, node *head2){
            node *temp = malloc(sizeof(node));
            temp->data = head->data;
            head->data = head2->data;
            head2->data = temp->data;
        }
        
        void Sortingll_Ascending(node * head){
            node *ptr, *last = NULL ;
            
            while (last != head)
            {
                ptr = head;

                while (ptr->link != last)
                {
                    if (ptr->data > ptr->link->data)
                    {
                        swapnodedata(ptr, ptr->link);
                    }

                    ptr = ptr->link;
                }

                last = ptr;
            }
            printf("sorted in ascending order :");
}

        void Sortingll_Descending(node * head){
            node *ptr, *last = NULL ;
            
            while (last != head)
            {
                ptr = head;

                while (ptr->link != last)
                {
                    if (ptr->data < ptr->link->data)
                    {
                        swapnodedata(ptr, ptr->link);
                    }

                    ptr = ptr->link;
                }

                last = ptr;
            }
            printf("sorted in Descending order :");
}

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
        printf("\n");
        printf("\n");
    }

int main()
{
    node *head;

    head = createlist(head);
    printf("\ncreated linked list :");
    printlist(head);
    Sortingll_Ascending(head);
    printlist(head);
    Sortingll_Descending(head);
    printlist(head);

    
    return 0;
}
    