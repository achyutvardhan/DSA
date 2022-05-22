#include<stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
    
};

int isEmpty(struct stack *s)
{
    if (s->top==-1)
    return 1;
    else
    return 0;

} 
int isFull(struct stack  *s)
{
    if (s->top == (s->size-1))      
    {
        return 1;
    }
    else
    return 0 ;
    
}

int main()
{
    // struct stack s;
    // s.top = -1;
    // s.size= 80;
    // s.arr = (int *)malloc(s.size*sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top=-1;
    s->arr = (int *) malloc (s->size*sizeof(int));
    //pushing an element
    s->arr[0] = 9;
    s->top++; 
    if (isEmpty(s))
    {
        printf("the stack is empty");
    }
    else
    printf("the stack is not empty");

    if (isFull(s))
    {
        printf("the stack is empty");
    }
else
printf("the stack is not full");    
    
    return 0;
}
