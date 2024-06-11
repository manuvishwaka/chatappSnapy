#include<iostream>
using namespace std;

bool find(int arr[],int index,int n,int target)
{

// base case
if(target==0)
return 1;
if(index==n || target<n)
 return 0;

  return  find(arr,index+1,n,target)||find(arr,index+1,n,target-arr[index]);
}



int main ()
{

int arr[]={2,4,6,2,5};
int target =20 ;
cout<<find(arr,0,5,target)<<" ";



}