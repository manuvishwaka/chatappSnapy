#include<iostream>
using namespace std ;

int couteven(int arr[],int index,int n)
{
  // base condition 
  if(index==n)
  return 0;
  
  int result;
  if(arr[index]%2==0)
  result=1;
  else{
    result=0;
  }

  return result+couteven(arr,index+1,n);

}


int main (){


int arr[8]={1,2,14,4,5,6,12,8};

cout<<couteven(arr,0,8);

}