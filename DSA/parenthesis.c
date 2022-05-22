#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    char *arr;
};

int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
void push(char exp, struct stack *sp)
{
    if (isFull(sp))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", exp);
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = exp;
    }
}
char pop(struct stack *sp)
{
    if (isEmpty(sp))
        printf("stack under flow");
    else
    {
        char val = sp->arr[sp->top--];
        return val;
    }
}
int parenthesis(char *exp)
{
    struct stack *sp;
    sp->top = -1;
    sp->size = 100;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i], sp);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char *exp = "2*(83+)) ";
    if (parenthesis(exp))
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }
    return 0;
}
