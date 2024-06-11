#include<iostream>
using namespace std;

int prefectsum(int arr[],int index,int sum,int n)
{

// if zero is included 
if(index==n)
return sum==0;

// normal base case for positive number 

// if (sum==0)
// {
//     return 1;
// }
// if (sum<0||index==n)
// {
//     return 0;
// }


    // include   + not include
    long long ans= prefectsum(arr,index+1,sum,n);
    ans+=prefectsum(arr,index+1,sum-arr[index],n);
    ans%=1000000007;
}


int main ()
{
    int arr[]={2,4,5,6,1};
    int sum=8;
    cout<<prefectsum(arr,0,8,5);
}