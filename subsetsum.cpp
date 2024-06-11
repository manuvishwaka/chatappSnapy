#include<iostream>
#include<vector>
using namespace std;

void printsum(int arr[],int index,int n, int sum)
{
    if (index==n)
    {
        cout<<sum<<endl;
        return;
    }
    
// not include
printsum(arr,index+1,n,sum);
// include
printsum(arr,index+1,n,sum+arr[index]);

}



int main ()
{


int arr[]={3,4,5};
printsum(arr,0,3,0);



}