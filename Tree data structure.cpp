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
void insert_left(node **root,int n)
{
    cout<<"Enter your root left number: ";
    cin>>n;
    (*root)->left = createNode(n);
}

void insert_right(node **root,int n)
{
    cout<<"Enter your root right number: ";
    cin>>n;
    (*root)->right = createNode(n);
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
        {
            insert_left(&root,n);
        }
        else if(symbol=='r')
        {
            insert_right(&root,n);
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
