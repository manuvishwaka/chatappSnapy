#include<iostream>
using namespace std;

 int printn(int n)
 {

if (n==1)
{
    return 1;
}


  return n+printn(n-1);


 }



int main ()
{

int n;
cout<<" Enter the numbeer "<<endl;
cin>>n;
cout<<printn(n);


}