#include<iostream>
using namespace std;


// implementation using arry 
class Queue
{
    int *arr;
    int rear,front,size;

    public:

    // constructor
    Queue(int n)
    {
        arr=new int[n];
        rear=front=-1;
        size=n;
    }

  // if quees is empty or not
    bool is_Empty()
{
    return front==-1;
}

bool is_full()
{
    return rear==size-1;
}

// push element in quee

void push(int x)
{
    if (rear==-1)
   {
    rear=front=0;
    arr[0]=x;
    cout<<x<<"  pushed to the quee"<<endl;
   }
   else if (is_full())
   {
    cout<<"queue is overflow"<<endl;
    return;
   }
   else
   {
    rear+=1;
    arr[rear]=x;
    cout<<x<<" pushe to the queue"<<endl;
   }
   

}

// pop element 

void pop()
{
    if (is_Empty())
    {
     cout<<"Queue is underflow"<<endl;
     return;
    }
    else
    {
       if (front==rear)
       {
        front=rear=-1;
       }
       else
       {
        cout<<arr[front]<<" pop from the stack"<<endl;
        front+=1;
       }
       
    }
    
    
}

///   start element is 

int start()
{
    if (is_Empty())
    {
        cout<<"Queue is underflow"<<endl;
        return -1;
    }
    else
    {
        return arr[front];
    }
    
}

};




int main()
{

Queue q(5);
q.push(5);
q.push(7);
q.pop();
int x=q.start();
if (!q.is_Empty())
{
    cout<<x<<" ";
}









}