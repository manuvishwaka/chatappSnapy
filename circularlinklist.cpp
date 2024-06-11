#include<iostream>
using namespace std;

class Node{
       public:
       int data;
       Node *next;

       // constructor
       Node(int data)
       {
        this->data=data;
       }
};


int main()
{

 Node *head=NULL,*temp;
 int list;
 cout<<"how namey list you want to creat"<<endl;
 cin>>list;
 while(list--)
 {

   int data;
   cin>>data;
 if (head==NULL)
 {
    
    head=temp=new Node(data);
 }
 else
 {
   temp->next=new Node(data);
   temp=temp->next;
 }
 }

// point last node to head 
temp->next=head;

int i=0;
while (i<3)
{
    cout<<temp->data<<" ";
    temp=temp->next;
    i++;
}


}