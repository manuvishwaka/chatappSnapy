#include<iostream>
using namespace std;

class stack 
{
int *arr;
int size;
int top;

public :

bool flag;

stack (int s)
{
    size=s;
    top=-1;
    arr= new int[s];
    flag=1;
}

// push operation 
void push(int value)
{
    if (top==size-1)
    {
        cout<<"stack is over flow"<<endl;
        return;
    }
    else
    {
      top++;
      arr[top]=value;
      cout<<"pushue "<<value<<" int to the stack\n";
      flag =0;
    }
    
}

// pop operation 

void pop()
{
     if(top==-1)
     {
        cout<<"stack is underflow"<<endl;
        return;
     }
     else
     {
        top--;
        cout<<"popped "<<arr[top+1]<<" from the stack\n";
        if(top==-1)
        {
            flag=1;
        }
     }
}

// peek
int peek()
{
    if (top==-1)
    {
        cout<<"stack is empty\n";
        return-1;
    }
    else
    {
        return arr[top];
      
    }
    
}

// is Empty;

bool IsEmpty()
{
    return top==-1;
}

// IsSize

int IsSize()
{
    return top+1;
}


};




int main()
{

stack S(5);

int value=S.peek();
if (S.flag==0)
 cout<<value<<endl;
 

}