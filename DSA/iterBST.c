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


struct node* search(struct node* root, int key){
    
    while (root!=NULL)
    {
    if (key==root->data)
    {
        return root;
    }
    else if (key<root->data)
    {
        root =root->left;
    }
    
    else{
        root = root->right;
    }
    
    }
    return NULL;
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
    
    struct node * n =search(p,16);
    if (n!=NULL)
    {
        printf("found %d ",n->data);
    }else{
        printf("element not found");
    }
    
    return 0;
}
