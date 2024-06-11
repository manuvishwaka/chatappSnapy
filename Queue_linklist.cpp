#include<iostream>
using namespace std;


// node bnayenge Quee k liye 

class Node
{
     public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

// queue  ko bnayenge uske are funcltion ko use karne k liye

class Queue
{
    Node *rear;
    Node *front;
   public:
    Queue()
    {
        rear=front=NULL;
    }

 bool IsEmpty()
 {
    return front==NULL;
 }

 void push(int x)
 {
    if (IsEmpty())
    {
        front=new Node(x);
        rear=front;
        cout<<"pushed element is "<<rear->data<<endl;
    }
    else
    {
        rear->next=new Node(x);
        rear=rear->next;
        cout<<"pushed element is "<<rear->data<<endl;
    }
    
 }

 void pop()
 {
    if (IsEmpty())
    {
        cout<<"Queue is under flow condition"<<endl;
        return;
    }
    else
{
    Node *temp=front;
    front=front->next;
    cout<<"poped element is "<<temp->data<<endl;
    delete temp;
}
   
    
 }

 int start()
 {
    if (IsEmpty())
    {
        cout<<"no element is present in Queue"<<endl;
        return -1;
    }
    else
    {
        return front->data;
    }
    
 }

};


int main()
{

Queue q;
for (int i = 1; i < 6; i++)
{
    cout<<"Enter the element "<<endl;
    int a;
    cin>>a;
    q.push(a);
};

q.pop();
q.pop();
cout<<"First element is  "<<q.start();





}