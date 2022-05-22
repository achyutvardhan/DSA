
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}
char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "x-y/z-k*d";
    printf("postfix is %s", infixToPostfix(infix));
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void push(struct stack *sp, char infix)
{
    if (isFull(sp))
    {
        printf("stack overflow");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = infix;
    }
}
int precedence(char a, char b)
{
    if (a == '*' && b == '+'||a=='*'&& b=='-'||a=='/'&&b=='+'||a=='/'&&b=='-')
    {
        return 1;
    }
    else
        return 0;
}

char *infixToPostfix(char *infix)
{
    struct stack *sp=(struct stack *) malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char * ch= (char *) malloc((strlen(infix)+1) * sizeof(char));
    int j = 0;
    for (int i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] != '+' || infix[i] != '-' || infix[i] != '/' || infix[i] != '*')
        {

            ch[j] = infix[i];
            j++;
        }
        else
        {   char a= sp->arr[sp->top];
            int i = sp->top + 1;
            while (sp->top == i)
            {
                if (isEmpty(sp))
                {
                    sp->arr[0] = infix[i];
                    sp->top++;
                    break;
                }

                if (precedence(infix[i], a))
                {
                    push(sp, infix[i]);
                }
                else
                {
                    ch[j] = pop(sp);
                    j++;
                    i--;
                }
            }
        }
    }
    while (!isEmpty(sp))
    {
        ch[j]=pop(sp);
        j++;
    }
      ch[j] = '\0';
    return ch;


}

int main()
{
    char * infix = "x-y/z-k*d";
    printf("postfix is %s", infixToPostfix(infix));
    return 0;
}

*/
