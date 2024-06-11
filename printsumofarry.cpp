#include<iostream>
using namespace std;

// int sum(int arr[],int index,int n)
// {
//           if (index==n)
//           {
//             return 0;
//           }
          
//           return arr[index]+sum(arr,index+1,n);

// }'

int sum(int arr[],int n)
{
    if (n==0)
    {
        return arr[n];
    }
    
return arr[n]+sum(arr,n-1);

}


int main()
{

    int arr[]={2,5,10,25,5};

    cout<<sum(arr,4);
}