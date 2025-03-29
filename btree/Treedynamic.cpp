#include<iostream>
using namespace std ;

class node
{
    public:
    int data;
    node *left;
    node *right;

    public:
    node( int d)
    {
        data = d;
        left=NULL;
        right=NULL;

    }
};


node *create(node *root)
{
    int d;
    cout<<"enter the data of the node ";
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    root= new node(d);

    cout<<"\n"<<"enter the data in the left of "<<d<<"\n";
    root->left=create(root->left);

    cout<<"\n"<<"enter the data in the right of "<<d<<"\n";
    root->right=create(root->right);

}

void preorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}
int main()
{
    node *root=NULL;

    root=create(root);

    cout<<"the preorder is = "<<"\n";
    preorder(root);

    cout<<"\n"<<"the inorder is = "<<"\n";
    inorder(root);

    cout<<"\n"<<"the postorder is = "<<"\n";
    postorder(root);

}




