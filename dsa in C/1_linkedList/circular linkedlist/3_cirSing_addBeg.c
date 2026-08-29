#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int data;
        struct node *next;
    }node;

    node * circularsingly(int data){
        node * tmp = malloc(sizeof(node));

        tmp->data = data;
        tmp->next = tmp;
        return tmp ;
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
    
    tail = circularsingly(data);

    add_atBeg_cirsingly(tail, 35);
    add_atBeg_cirsingly(tail, 45);

    printlist(tail);
    
    return 0;
}