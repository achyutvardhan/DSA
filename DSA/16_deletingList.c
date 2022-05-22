#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deletingFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
}
struct Node *deletingInBetween(struct Node *head, int index)
{
    struct Node *ptr = head->next;
    struct Node *p = head;
    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
}
struct Node *deletingAtEnd(struct Node *head)
{
    struct Node *ptr = head->next;
    struct Node *p = head;
    while (ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return head;
}
struct Node *deletingByValue(struct Node *head,int element)
{   
    struct Node *p= head;
    struct Node *q=head->next;
    while (q->data!=element&&q->next!=NULL)
    {
        q= q->next;
        p= p->next;
    }
    if (q->data == element)
    {
        p->next=q->next;
        free(q);

    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and NULL nodes
    third->data = 41;
    third->next = NULL;
    traversal(head);
    deletingAtEnd(head);
    traversal(head);
    return 0;
}
