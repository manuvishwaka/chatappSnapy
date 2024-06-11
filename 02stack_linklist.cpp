#include<iostream>
using namespace std;

// define how is node visible

class Node{
public :
int data;
Node *next;


Node(int value)
{
    data=value;
    next=NULL;
}


};

// creating stack 


class Stack 
{
 
 Node *top;
 int size;

  public:

 Stack()
 {
    top=NULL;
    size=0;
 }


// push

void push(int value)
{
    Node *temp=new Node(value);
  if(temp==NULL)
  {
   cout<<"Stack is over flow"<<endl;
   return;
  }
  else
  {
    temp->next=top;
    top=temp;
    size++;
    cout<<value<<" pushed into the stack\n";
  }

}
//pop
void pop()
{
    if(top==NULL)
    {
        cout<<" stack is underflow \n";
    }
    else
    {
        cout<<top->data<<" pop from the stackn";
           Node *temp;
           temp=top;
           top=top->next;
           delete temp;
           size--;
    }
}
//peek
//IsEmpty
//IsSize

int Issize()
{
    return size;
}
};




int main ()
{
Stack s;
s.push(5);
s.push(6);
s.push(7);
s.pop();
cout<<s.Issize();
}