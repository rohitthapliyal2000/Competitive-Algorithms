/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void top_rt(node *root)
{
    if(root != NULL)
    {
        cout << root -> data << " ";
        top_rt(root -> right);
    }
    return;
}

void top_lf(node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        top_lf(root -> left);
        cout << root -> data << " ";
    }
}

void top_view(node * root)
{
    top_lf(root);
    top_rt(root -> right);
}
