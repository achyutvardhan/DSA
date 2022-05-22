#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *sp, char exp)
{
    if (isFull(sp))
    {
        printf("stack overflow");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = exp;
    }
}
int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}
char pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("stack under flow\n");
    }

    else
    {
        char val = sp->arr[sp->top--];
        return val;
    }
    return 0;
}

int multiParenthesis(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char));
    char poped = pop(sp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            if (!match(poped, exp[i]))
            {
                return 0;
            }
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
    char *exp = "[[4-6]((8){(9-8])}) ";
    if (multiParenthesis(exp))
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }
    return 0;
}
