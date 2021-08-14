#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
struct node* createNode(int n)
{
    node *temp = new node;
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct node* insert_tree(node *root,int n)
{
    if((root)==NULL)
    {
        return  createNode(n);
    }
    if((root)->data< n)
    {
        (root)->right = insert_tree((root)->right,n);
    }
    else if((root)->data> n)
    {
        (root)->left = insert_tree((root)->left,n);
    }
    return root;

}

void inorder(node *root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void preorder(node *root)
{
    if(root==NULL)return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<endl;
}

int main()
{
    int n;
    char symbol;
    node *root=NULL;
    root=new node;

    root->data=7;
    root->left=NULL;
    root->right=NULL;
    for(int i=0;; i++)
    {
        cout<<"Enter your choice: "<<endl;
        cin>>symbol;
        if(symbol=='l')
        {   cout<<"Enter tree digit: ";
            cin>>n;
            insert_tree(root,n);
        }
        else if(symbol=='i')
        {
            inorder(root);
        }
        else if(symbol=='p')
        {
            preorder(root);
        }
        else if(symbol=='o')
        {
            postorder(root);
        }
    }

}


