#include <stdio.h>

# define max 4
int stack_arr[max];

int top = -1; // currently stack is empty

    void push (int data){

        if (stack_arr[top] == max){
            printf("stack overflow");
            return;
        }

        top += 1;
        stack_arr[top] = data;
    }

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    

    return 0;
}