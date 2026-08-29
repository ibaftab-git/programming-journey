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

    node *del_first(node **head){
        node * ptr = *head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(ptr);
        ptr = NULL;
        return *head;
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

int main()
{
    node *head = NULL;
    
    head = createlist(head);

    printlist(head);

    printf("deletion of first node :\n");
    del_first(&head);
    
    printlist(head);

    return 0;
}