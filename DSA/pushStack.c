#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
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
int pop(struct stack*s)
{
    if (isEmpty(s))
    {
        printf("it is empty");
        return  -1;
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return pop;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 80;
    s->arr = (int *)malloc(s->size * sizeof(int));
        printf("Before pushing, Full: %d\n", isFull(s));
    printf("Before pushing, Empty: %d\n", isEmpty(s));
    push(s, 1);
    push(s, 23);
    push(s, 99);
    push(s, 75);
    push(s, 3);
    push(s, 64);
    push(s, 57);
    push(s, 46);
    push(s, 89);
    push(s, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("After pushing, Full: %d\n", isFull(s));
    printf("After pushing, Empty: %d\n", isEmpty(s));
        printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
   

    return 0;
}
