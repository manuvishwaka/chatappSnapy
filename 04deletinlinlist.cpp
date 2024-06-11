#include<iostream>
using namespace std;

class node
{
public:
int data;
node *next;

 node(int data){
        this->data=data;
        this->next=NULL;
    }

};

// creat link list




int main (){
  // node *head,*temp; 
//     head=NULL;

// int arr[]={2,4,6,8,10};

// for (int  i = 0; i < 5; i++)
// {
//      // agr linklist khalli hai 
//     if (head==NULL)
//     {
//       head=temp= new node(arr[i]);
//     }
//     // link list me element hai to 
//     else{
//         temp->next= new node(arr[i]);
//       temp=temp->next;
//     }

// }

// temp=head;

// while (temp)
//  node *head,*temp;
 
// {
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }



node *head,*tail;
head =NULL;

int arr[]={2,4,6,8,10};

for(int i=0;i<5;i++)
{
if(head==NULL)
{
    head=tail= new node(arr[i]);
}
else{
    tail->next=new node(arr[i]);
    tail=tail->next;
}
}

tail=head;
while (tail)
{
      cout<<tail->data<<" ";
      tail=tail->next;
}

cout<<endl;


// // ****** code for delet first noed********** 

// node *dub;
// if (head!=NULL)
// {
//   dub=head;
//    head=head->next;
//    delete dub;
// }


// //   ************* prinnt after delet node **********

// tail=head;
// while (tail)
// {
//       cout<<tail->data<<" ";
//       tail=tail->next;
// }

// // 8********** delet last node jab karenge tab do case arise honge
// if (head!=NULL)
// {

//  node *prev, *current;

//  // ***** case 1 when head point only one node

//  if (head->next==NULL)
//  {
//     node *temp1=head;
//     delete temp1;
//     head=NULL;
//  }
//  else
//  {

//   prev =NULL;
//   current=head;
//   while (current->next!=NULL)
//   {
//     prev=current;
//     current=current->next;
//   }
  
//   delete current;
//   prev->next=NULL;
//  }
 
// }

// cout<<endl;
// // *********  print after deleting last node;

// tail=head;
// while (tail)
// {
//       cout<<tail->data<<" ";
//       tail=tail->next;
// }


// *******  code for delet desire node *************

node *current,*prev;
current=head;
int x;
cin>>x;
prev=NULL;

if (head!=NULL)
{
    int count=1;
           while (count<x)
           {
            prev=current;
            current=current->next;
            count++;
           }
           
           prev->next=current->next;
           delete current;
}

tail=head;
while (tail)
{
      cout<<tail->data<<" ";
      tail=tail->next;
}
 


}