#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data ;
    struct Node* next;
};
int isEmpty(struct Node*ptr)
{
    if (ptr==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int isFull(struct Node *top)
{
    struct Node * n =(struct Node *)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        return 1;
    }
    else
    return 0;

}
struct Node * push(struct Node * top , int x)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        printf("stack overflow\n");
    }
    else
    {
        n->data = x;
        n->next = top;
        top = n;
        return top;

    }
    
}
int pop(struct Node **top)
{
    if(isEmpty(*top))
    {
        printf("stack underflow");

    }
    else
    {
        struct Node *n= *top;
        * top=(*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
struct Node *traversal(struct Node *top)
{
    while (top!=NULL)   
    {
        printf("%d\n",top->data);
        top=top->next;
    }
    
}
int peek (int pos,struct Node *top)
{
    struct Node*ptr= top;
    for (int i = 0; i < pos-1&&ptr!=NULL; i++)
    {
        ptr=ptr->next;
    }
    if (ptr!=NULL)
    {
        return ptr->data;
    }
    else
    return -1;     
    
}
int main()
{   
struct Node * top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    traversal(top);
        int element = pop(&top);
    printf("Popped element is %d\n", element);
    traversal(top);
    return 0;
}

/*
You must have observed we used the pointer to a pointer while popping elements from the stack.
 We referenced and unreferenced twice. So, to avoid all these complexities, I still have a
  better way to implement that thing. We can declare the top pointer globally.
 Earlier we used to declare it under main. Declaring it globally gives its access to all our
  functions without passing them as a parameter.


*/
/*#include<stdio.h>
#include<stdlib.h>
 
struct Node{ 
    int data;
    struct Node * next;
};
 
struct Node* top = NULL;
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
 
int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
 
int main(){
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    
    // linkedListTraversal(top);
 
    int element = pop(top); 
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    return 0;
}
*/