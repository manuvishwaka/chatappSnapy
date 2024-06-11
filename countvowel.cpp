#include <iostream>
using namespace std;

int countv(string str, int i, int n)
{
  
    if (i == n)
        return 0;
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
    return 1+ countv(str,i+1,n);
    }
    else{
    return countv(str,i+1,n);
    }
    
}

int main()
{

    string str = "abhishek";

    
    cout << countv(str, 0,8);
}