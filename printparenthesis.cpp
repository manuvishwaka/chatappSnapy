#include<iostream>
#include<vector>
using namespace std;

void printpren(int n,int l,int r,vector<string>&ans,string &temp)
{

  // base condition 
  if (l+r==2*n)
  {
    ans.push_back(temp);
    return;
  }
  

  // left hmesa bada hoga right se 

  // left k liye
  if (l<n)
  {
    temp.push_back('(');
    printpren(n,l+1,r,ans,temp);
    temp.pop_back();
  }
  if (r<l)
  {
    temp.push_back(')');
    printpren(n,l,r+1,ans,temp);
    temp.pop_back();
  }
  

}


int main ()
{

int n;

vector<string>ans;
string temp;

printpren(n,0,0,ans,temp);

for (int  i = 0; i <ans.size(); i++)
{
    cout<<ans[i]<<endl;

}


}