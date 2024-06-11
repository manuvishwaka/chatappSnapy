#include <iostream>
using namespace std;

class Node{
  public:
  Node *prev;
  int data;
  Node *next;

  Node(int value)
  {
  
    data=value;
  prev=  next=NULL;
  }
};


// ******* creat doubly linklist with the help  of recuresion  **********

// Node *creat_DLL(int arr[],int index,int size,Node *back)
// {
//    if(index==size)
//    return NULL;

//    Node *temp= new Node(arr[index]);
//    temp->prev=back;
//    temp->next = creat_DLL(arr,index+1,size,temp);
//    return temp;
// }



int main()
{

   // ***** add node in doubly linklist ******

// Node *head=NULL;

// // insert at start
// // linklist not exixst
// if(head==NULL)
// {
//     head=new Node(5);
// }

// // linklist exixst
// else
// {
//   Node *temp= new Node(5);
//   temp->next=head;
//   head->prev=temp;
//   head=temp;

// }

// Node *trav=head;
// while (trav)
// {
//   cout<<trav->data<<" ";

// trav=trav->next;
// }
  
  //********fill the arry 2 4 6 8 in doubly linklist ******

  int arr []={2,4,6,8,10};

  Node *head=NULL,*temp;

  for (int i = 0; i < 5; i++)
  {
    
    if(head==NULL)
    {
      head=temp=new Node(arr[i]);
    }
    else
    {
      Node *new_node=new Node(arr[i]);
      temp->next=new_node;
      new_node->prev=temp;
      temp=new_node;
    }
 }



// ******* recursion function call ******
// creat_DLL(arr,0,4,NULL);

// insert node at given position *******

// three case occur 

// when pos == 0;

int pos;
cout<<"Enter the postion";
cin>>pos;

// insert at start
if (pos==0)
{

  if (head==nullptr)
  {
    head= new Node(12);
  }
  else
  {
 Node *new_node= new Node(12);
 new_node->next=head;
 head->prev=new_node;
 head=new_node;

   }
}
else
{
  Node *curr=head;
 // goto the node after which we insert 
 while (--pos)
 {
  curr=curr->next;
 }
 

  // insert at end 
if (curr->next==NULL)
{
  Node *new_node =new Node(12);
  new_node->prev=curr;
  curr->next=new_node;
  
}

  // insert at middle
  else
  {
    Node *new_node =new Node(12);
    new_node->next=curr->next;
    new_node->prev=curr;
    curr->next=new_node;
    new_node->next->prev=new_node;
  }
}



temp=head;  
  while (temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
  

}