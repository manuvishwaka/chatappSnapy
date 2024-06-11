#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};


void preorder(Node *root)
{
    // base case
    if (root==NULL)
        return;

    
    // print Node 
    cout<<root->data<<" ";
    // go to left 
    preorder(root->left);
    // go to right 
    preorder(root->right);
};

// Inorder 

void Inorder(Node  *root)
{
    // base case
    if (root==NULL)
    {
     return;
    }
    
    // left jao
    Inorder(root->left);
    // node print 
    cout<<root->data<<" ";
    // right jao
    Inorder(root->right);
};

/// post order

void postOrder(Node  *root)
{
    // base case
    if(root==NULL)
    return;
    // left jao
    postOrder(root->left); 
    // right jao
    postOrder(root->right);
    // node print karo
    cout<<root->data<<" ";
};

Node* tree()
{

    int x;
    cin>>x;

    if(x==-1)
    return NULL;
    

    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<x<<endl;
    temp->left=tree();// left side 
    cout<<"Enter the right child of "<<x<<endl;
    temp->right=tree();
    return temp;

}



int main()
{

cout<<"Enter the root Node"<<endl;
Node *root;
root=tree();

cout<<" PreOrder Traversal :";
 preorder(root);

 cout<<"\n InOrder Traversal: ";
 Inorder(root);

  cout<<"\n postOrder Traversal: ";
  postOrder(root);




}