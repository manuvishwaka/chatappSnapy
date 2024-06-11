#include<iostream>
#include <vector>
using namespace std;

void subset(string &str,int index,int n,vector<string>&ans,string &temp)
{
    if (index==n)
    {
        ans.push_back(temp);
        return;
    }
    
// not include
subset(str,index+1,n,ans,temp);
// include tepm me value dalo

temp.push_back(str[index]);

// include function call
subset(str,index+1,n,ans,temp);
temp.pop_back();

}


int main (){

string str="abc";

vector<string>ans; // final ans
string temp;
subset(str,0,str.size(),ans,temp);

for (int i = 0; i < str.size(); i++)
{
    cout<<ans[i]<<endl;
}




}