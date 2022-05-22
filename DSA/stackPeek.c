#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* s)
{
    if (s->top==-1)
    {
        return 1;
    }

    else
    return 0;
    
}
int isFull(struct stack *s)
{
    if (s->top == s->size-1)    
    {
        return 1;
    }
    else
    return 0;
}

void push(struct stack *s, int val)
{
    if (isFull(s))
    {
     printf("the stack is full");
    }
    else
    {
        s->arr[++s->top]=val;
    }
}

int peek(struct stack*s, int val)
{
    if (s->top-val+1<0)
    {
        printf("not a valid point");
        return -1; 
           }
           else 
           return s->arr[s->top-val+1];
    
}

int main()
{ struct stack *s= (struct stack* )malloc(sizeof(struct stack));
  s->size=80;
  s->top = -1;
  s->arr = (int *)malloc(s->size*sizeof(int));

    push(s,20);
    push(s,56);
    push (s,49);
    push(s,48);

printf("%d",peek(s,1));
    return 0;
}
