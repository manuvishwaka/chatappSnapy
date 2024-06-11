#include<iostream>
using namespace std;

void ltou( string &str,int index)
{
    if(index==-1)
    return;
    str[index]='A'+str[index]-'a';
      ltou(str,index-1);
}


int main(){

   string str="bunty";
   ltou(str,4);
   cout<<str;
}