// creating binary tree using non recursion

#include<iostream>
#include<queue>

using namespace std;

// creating node for tree node using class 

class Node {
    public:

    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        right=left=NULL;
    }
};



int main()
{


// creating a queue to store leaf address node or you can say that the node where you have to put value 

queue<Node*>q;
int x,f,s;
cin>>x;

// creatin root node 
 Node* root=new Node(x);
 cout<<x<<" : root data"<<endl;


q.push(root);

// inseting data in tree 

while (!q.empty())
{
    Node *temp=q.front();
    q.pop();
     
     cout<<"Enter the left child of :"<<temp->data<<endl;
    cin>>f;
    if (f!=-1)
    {
        temp->left=new Node(f);
        cout<<temp->left->data<<" : insert on left side of :"<<temp->data<<endl;
        q.push(temp->left);
    }

    cout<<"Enter the right child of :"<<temp->data<<endl;
    cin>>s;
    if (s!=-1)
    {
        temp->right=new Node(s);
        cout<<temp->right->data<<" : insert on right side of :"<<temp->data<<endl;
        q.push(temp->right);
    }
    
    
}




}
