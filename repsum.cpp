// repitation sum 

#include<iostream>
using namespace std;

int repsum(int arr[],int index,int n, int sum)
{
    // base case 
    if(sum==0)
    return 1;
    if(index==n||sum<0)
    return 0;
    // not included
    long long ans=repsum(arr,index+1,n,sum);
    ans+=repsum(arr,index,n,sum-arr[index]);
    return ans;
}

int main ()
{
    int arr []={2,3,4};


    int sum=6;
    // function call
    cout<<repsum(arr,0,3,sum);

}