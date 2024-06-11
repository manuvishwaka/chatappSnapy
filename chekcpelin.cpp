#include<iostream>
using namespace std;

bool checkpelin(string str ,int start ,int end)
{
 
    if(start>=end)
    return true;

    if(str[start]!=str[end])
    return false;

   return checkpelin(str,start+1,end-1);
    

}


int main()
{
  
  // creat string 
   string str = "namon";

  cout<<checkpelin(str,0,4);



}