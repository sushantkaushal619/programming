#include<bits/stdc++.h>
using namespace std;

int main() 
{
  string str="()()(";
  stack<char> s;
  bool flag=true;
  int ans=0;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='(')
    s.push('(');
    else
    {
      s.pop();
      ans++;
    } 
  }
  if(!s.empty())
  cout<<"-1";
  else
  {
    cout<<ans;
  }
  

	return 0;
}