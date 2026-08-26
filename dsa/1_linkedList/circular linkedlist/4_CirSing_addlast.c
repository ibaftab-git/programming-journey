#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int data;
        struct node *next;
    }node;

    node * add_At_Empty(int data){
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

    void add_atBeg_cirsingly(node *tail, int data){
        node *newP = malloc(sizeof(node));
        newP->data = data;
        newP->next = tail->next;
        tail->next = newP;
        tail = newP;
    }
    
    void printlist(node *tail){
        // printing the circular linked list
        node * p = tail->next;
        
        do {
            printf("%d ", p->data);
            p = p->next;
        }
        while(p != tail->next);
    }

int main()
{
    node *tail;
    int data = 25;
    
    tail = add_At_Empty(data);

    tail = add_At_End(tail, 35);
    tail = add_At_End(tail, 45);
    tail = add_At_End(tail, 55);
    tail = add_At_End(tail, 65);

    printlist(tail);
    
    return 0;
}