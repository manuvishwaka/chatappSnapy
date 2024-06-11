#include<iostream>
using namespace std;

// void print(int arry[],int index, int n)
// {
//     if(index==n)
//     return;

// cout<<arry[index]<<endl;
//  print(arry,index+1,n);


// }

 void print(int arry[],int n){

    if (n==0)
    {
       cout<<arry[n]<<endl;
       return ;
    }
    
    print(arry,n-1);
    cout<<arry[n]<<endl;

}

int main(){


  int arry[]={2,5,8,9,10,11};

print(arry,5);

}