#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* creatLinklist(int arr[],int index ,int size)
{
    // base case`1` 
     if(index == size)
     {
        return NULL;
     }

     node *temp;
     temp= new node(arr[index]);
     temp->next=creatLinklist(arr,index+1,size);

     return temp; 
}

int main(){

    //************* ye code hai head k aage insert krne wala ***********

//     node *head;
//     head=NULL;

// int arr[]={2,4,6,8,10};
// // insert the node at begning
// for(int i =0;i<5;i++){
// // link list does not exist
// if (head==NULL)
// {
//     head= new node(arr[i]);
// }
// // link list exist
// else{
//     node *temp;
//     temp= new node(arr[i]);
//     temp->next=head;
//     head=temp;
// }
// }
//     // print the value

//     node *temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
    //

    //**************node creat by adding a node at end ************


// node *head,*tail;
// head =NULL;

// int arr[]={2,4,6,8,10};

// for(int i=0;i<5;i++)
// {
// if(head==NULL)
// {
//     head=tail= new node(arr[i]);
// }
// else{
//     tail->next=new node(arr[i]);
//     tail=tail->next;
// }
// }

// tail=head;
// while (tail)
// {
//       cout<<tail->data<<" ";
//       tail=tail->next;
// }


// ********  Recursion ki help se creat link list adding node at end **************

node *head;
head=NULL;

int arr[]={2,4,6,8};

head=creatLinklist(arr,0,4);

node *tail;
tail=head;
while (tail)
{
      cout<<tail->data<<" ";
      tail=tail->next;
}

}