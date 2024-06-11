#include<iostream>
using namespace std;

int counte(int arr[],int i,int n)
{

   if(i>n)
   return 0;

int result;

   if (arr[i]%2==0)
   {
    return 1+counte(arr,i+1,n);;
   }
   
else
{
   return counte(arr,i+1,n);
}
}

int main ()
{
 
  int arr[]={2,5,8,10};

  cout<<counte(arr,0,4);




}