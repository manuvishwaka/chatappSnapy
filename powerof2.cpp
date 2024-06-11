#include<iostream>
using namespace std;

int pow(int num, int n)
{

  if(n==1)
  return num;

  return num*pow(num,n-1);

}

int main ()
{

int num ,n;

cout<<"Enter the number "<<endl;
cin>>num;
cout<<"Enter the power "<<endl;
cin>>n;
cout<<" the resutl is = "<<pow(num,n);


}