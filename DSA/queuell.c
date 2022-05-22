#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node*f )
{
if (f->next =NULL)
{
    return 1;
}
else
return 0;
}

void dequeue(struct node*f)
{ if (isEmpty(f))
{
    printf("ll is empty");
}
else
{
f=f->next;
printf("dequeued");
}
}

void enqueue(struct node *q, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    q->next = ptr;
    ptr->next = NULL;
    q=ptr;
    printf("enqueued\n");
}
int main()
{
    struct node *f = (struct node *)malloc(sizeof(struct node));
    struct node *r = (struct node *)malloc(sizeof(struct node));
    f=r;
    enqueue(r,3);
    enqueue(r,5);
    dequeue(f);
    dequeue(f);
    dequeue(f);

    return 0;
}
