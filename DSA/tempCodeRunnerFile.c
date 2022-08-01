struct node * cerateNode(int data)
{
    struct node* p = (struct node*) malloc(sizeof(struct node));
    p->data= data;
    p->left = NULL;
    p->right =NULL;
    return p;
}