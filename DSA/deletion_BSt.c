
#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *left;
    struct node *right;
};


struct node *indorderPre(struct node *root)
{

    if (root->left==NULL)
    {
      root=root->right;  
    }
    else{
    root = root->left;

    while (root->right != NULL)
    {
        root = root->right;
    }
    }
    return root;
}


struct node *cerateNode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    // search to node to be deleted
    if (root->data > value)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // deletion stratergy when node is found
    else
    {
        iPre = indorderPre(root);//6
        root->data = iPre->data;
        if (root->left!=NULL)
        {
            /* code */
        root->left = deleteNode(root->left, iPre->data);
        }
        else{
            root->right = deleteNode(root->right, iPre->data);
        }
    }
    return root;
}

void inOrder(struct node*root)
{
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
    
}
int main()
{
    struct node *p = cerateNode(4);
    struct node *p1 = cerateNode(2);
    struct node *p2 = cerateNode(1);
    struct node *p3 = cerateNode(3);
    struct node *p4 = cerateNode(6);
    struct node *p5 = cerateNode(7);
    struct node *p6 = cerateNode(5);
    struct node *p7 = cerateNode(8);
    
    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;
    p4->right = p5;
    p4->left = p6;
    p5->right =p7;
 deleteNode(p,6);
inOrder(p);
    return 0;
}
