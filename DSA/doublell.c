#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void traversal(struct Node*head)
{
    struct Node* ptr = head;
    struct Node*p;
   do
   {
       printf("%d\n",ptr->data);
       p=ptr;
       ptr=ptr->next;
   } while (ptr!=NULL);
   
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->prev;
    }
    
    
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    head->prev=NULL;

    // Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev = head;
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    third->prev = second;
   // link  fourth and null
    fourth->data = 20;
    fourth->next = NULL;
    fourth->prev = third;
    traversal(head);
    return 0;
}
