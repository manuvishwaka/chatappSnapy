#include<iostream>
using namespace std;

int multi(int arr[],int index,int n)
{
    if(index==n)
    return 1;

    return arr[index]*multi(arr,index+1,n);
}

int multii(int arr[],int n)
{
    if(n==0)
    return arr[n];

   return arr[n]*(multii(arr,n-1));
}





int main (){



    int arr[5]={1,2,3,4,5};

    cout<<multi(arr,0,5);
    cout<<endl;
    cout<<multii(arr,4);
}