#include<iostream>
using namespace std;

void rev(string &str,int i,int j)
{
    
    
  if(i>j)
  return;

    // process swap value 
    char c=str[i];
    str[i]=str[j];
    str[j]=c;

    rev(str,i+1,j-1);
}


int main (){


    string str="BUNTY";
    rev(str,0,4);
    cout<<str;
}