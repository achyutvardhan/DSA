#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node* left;
    struct node* right;
};
struct node * cerateNode(int data)
{
    struct node* p = (struct node*) malloc(sizeof(struct node));
    p->data= data;
    p->left = NULL;
    p->right =NULL;
    return p;
}

void insert(struct node* root,int key)
{
    struct node*ptr = cerateNode(key);
    struct node*prev = NULL;
    while (root!=NULL)
    { 
        prev =root;
       if (root->data == key)
       {
        printf("data already exist");
        return;
       }
       else if (root->data>key)
       {
        root =root->right;
       }
       else{
        root =root->left;
       }
       
    }
    
    if (prev->data>key)
    {
        prev->left =ptr;
    }
    else{
        prev->right =ptr;
    }


    
}

int main()
{
     struct node * p = cerateNode(5);
    struct node * p1 = cerateNode(3);
    struct node * p2 = cerateNode(1);
    struct node * p3 = cerateNode(4);
    struct node * p4= cerateNode(6);

p->left=p1;
p->right = p4;
p1->left=p2;
p1->right = p3;
    
    
    return 0;
}
