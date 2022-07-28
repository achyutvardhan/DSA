#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node * cerateNode(int data)
{
    struct node* p = (struct node*) malloc(sizeof(struct node));
    p->data= data;
    p->left = NULL;
    p->right =NULL;
    return p;
}

void inOrder(struct node * root){
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);

    }
    
}
int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
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
inOrder(p);
    return 0;
}
