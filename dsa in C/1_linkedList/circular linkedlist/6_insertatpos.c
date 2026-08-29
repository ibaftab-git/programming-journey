#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

    void add_At_Beg(node *tail, int data);
    node * add_At_Empty(int data);
    node * add_At_End(node * tail, int data);

    node * createlist(node * tail){
        int n, data;
        printf("enter the node :");
        scanf("%d", &n);

        if(n == 0){
            printf("empty linklist!");
            return tail;
        }

        printf("enter value of 1st node :");
        scanf("%d", &data);
        tail = add_At_Empty(data);

        for(int i = 2; i <=n; i++){
            printf("Enter value of %dth node :", i);
            scanf("%d", &data);
            tail = add_At_End(tail, data);
        }
        return tail;
    }

    node * add_At_Empty(int data){ // creating only a node...
        
        node * tmp = malloc(sizeof(node));
        tmp->data = data;
        tmp->next = tmp;
        return tmp ;
    }

    node * add_At_End(node * tail, int data){
        node * ptr = malloc(sizeof(node));
        ptr->data = data;
        ptr->next = tail->next;
        tail->next = ptr ;
        tail = ptr;
        return tail;
    }

    
    void add_at_pos(node* tail, int position){
        node * ptr = tail->next;
        int data, i = 1;
        printf("enter data which you want to enter at %dth position :", position);
        scanf("%d", &data);

        node *newP = malloc(sizeof(node));
        newP->data = data;
        while(i != position-1){
            ptr = ptr->next;
            i++;
        }
        newP->next = ptr->next ;
        ptr->next = newP;
    }

    void printlist(node *tail){
        // printing the circular linked list
        node * p = tail->next;
        
        do {
            printf("%d ", p->data);
            p = p->next;
        }
        while(p != tail->next);
        printf("\n");
    }

int main()
{
    node *tail;
    
    tail = createlist(tail);
    printlist(tail);

    add_at_pos(tail, 3);

    printf("after insertion :\n");

    printlist(tail);
    
    return 0;
}