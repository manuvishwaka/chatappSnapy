#include<iostream>
#include<queue> 
using namespace std;



int main()
{

queue<int>q;


q.push(45);
q.push(35);
q.push(5);
q.push(15);
q.push(25);
q.push(51);

int n=q.size();

while (n--)
{
    cout<<q.front()<<endl;
      q.push(q.front());
    q.pop();
   
    
}



}