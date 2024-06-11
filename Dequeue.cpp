#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

class Dequeue{

    Node *rear,*front;

    public:
    Dequeue()
    {
        rear=front=NULL;
    }

          
      // push element in front
    void push_front(int x)
    {
        if (front==NULL)
        {
            front=rear=new Node(x);
            cout<<"pushe element in front  is : "<<x<<endl;
            return;
        }
        else
        {
            Node *temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"pushe element in front is : "<<x<<endl;
            return;
        }
        
    }
     
     // push element in back of Dequeue

     void push_back(int x)
     {
        // if Dq is empty
        if (rear==NULL)
        {
            front=rear=new Node(x);
             cout<<"pushe element in back is : "<<x<<endl;
            return;
        }
        else
        {
            Node *temp=new Node(x);
           rear->next=temp;
           temp->prev=rear;
            rear=temp;
             cout<<"pushe element in back is : "<<x<<endl;
            return;
        }
        
     }

     // pop element from front 

     void pop_front()
     {
        if (front==NULL)
        {
            cout<<"DQ is in underflow condition"<<endl;
            return;
        }
        else
        {
            Node *temp=front;
            front=front->next;
            cout<<" poped element from front is :"<<temp->data<<endl;
            delete temp;
            if (front)
            {
              front->prev=NULL;
            }
            else
            {
                rear=NULL;
            }
            
        }
        
     }

     // pop from back 

     void pop_back()
     {
        if (front==NULL)
        {
            cout<<"DQ is in under flow condition "<<endl;
            return;
        }
        else
        {
            Node *temp=rear;
            rear=rear->prev;
            cout<<" poped element from back is :"<<temp->data<<endl;
            delete temp;
            if (rear)
            {
                rear->next=NULL;
            }
            else
            {
             front=NULL;
            }
            
        }
        
     }


     // find front element 

     int start()
     {
        if (front==NULL)
        {
            cout<<"Dq is underflow condition"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
        
     }

     // find back element 

     int end()
     {
        if (front==NULL)
        {
            cout<<" Dq is in underflow condition "<<endl;
            return -1;
        }
        else
        return rear->data;
        
     }

};




int main()
{

 
Dequeue dq;
dq.push_back(4);
 dq.push_back(6);
 dq.push_back(7);
dq.push_front(2);
dq.push_front(3);
dq.push_front(4);
//dq.pop_back();
// dq.pop_back();
cout<<dq.end()<<endl;






}