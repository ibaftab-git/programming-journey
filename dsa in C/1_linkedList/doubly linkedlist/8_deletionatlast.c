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

    node *createlist(node *head){
        int data, n;
        printf("enter the number of node :");
        scanf("%d", &n);

        if(n == 0) return head;
        printf("enter the 1st node :");
        scanf("%d", &data);
        head = addToEmpty(head, data);

        for(int i = 2; i <=n; i++){
            printf("enter the %dth node :", i);
            scanf("%d", &data);
            addAtEnd(head, data);
        }
        return head;
    }

    void del_last(node *head){
        node * temp, *temp2;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp2 = temp->prev;
        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
    
    void printlist(node *head){
        node *ptr = head; // for printing the linklist
        while(ptr != NULL){
            printf(" %d ", ptr->data);
            if(ptr->next != NULL) printf("<->");
            ptr = ptr->next;
        }
        printf("\n");
    }

    void del_pos(node *head, int position){
        node *temp, *temp2;
        temp = head;
        int i = 1;
        while (i != position)
        {
            temp = temp->next;
        }
        temp2 = temp->prev;
        temp2->next = temp->next ;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }

int main()
{
    node *head = NULL;
    
    head = createlist(head);

    printlist(head);

    printf("deletion of last node :\n");
    del_last(head);
    
    printlist(head);

    return 0;
}