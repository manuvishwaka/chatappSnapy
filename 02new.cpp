#include<iostream>
using namespace std;


int main(){


// int a,b;
// cin>>a>>b;

// try{
//     if (b==0)
//         throw"Divided by zero is not possible\n";   
// int c=a/b;
// cout<<c<<endl;
// }
// catch(const char *e)
// {
//     cout<<"Exception occured: \n"<<e<<endl;
// }

try{
int *p = new int [10];
cout<<"memory allocation is successfull\n";
delete []p;
}
catch(const exception &e)
{
    cout<<"exception occured"<<e.what()<<endl;
}

}