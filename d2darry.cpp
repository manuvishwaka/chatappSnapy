#include<iostream>
using namespace std;


int main () 
{


int row;
cin>>row;
int col;
cin>>col;

// creating 2d arry 
int **ptr=new int*[row];

for (int i = 0; i < row; i++)
{
     ptr[i]= new int[col];
}

// storing data in 2d arry

for (int i = 0; i < row; i++)
{
    for (int  j = 0; j < col; j++)
    {
        cin>>ptr[i][j];
    }
    
}
cout<<endl;

// output from 2d arry 

for (int i = 0; i < row; i++)
{
    for (int  j = 0; j < col; j++)
    {
        cout<<ptr[i][j]<<" ";
    }
    cout<<endl;
}

for (int i = 0; i < row; i++)
{
    delete[] ptr[i];
}

delete [] ptr;





}