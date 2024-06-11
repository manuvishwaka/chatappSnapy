#include<iostream>
using namespace std;

int mine( int arr[],int index,int n){

       if(index==n-1)
       return arr[index];

       return max(arr[index],mine(arr,index+1,n));

}

int main () 
{

 int arr[]={5,6,4,2,16,3};

cout<<mine(arr,0,6);





}