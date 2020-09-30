#include <iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main() 
{
   
       string s1 = "aab";
        string s2 = "aaaab";
   int count=0;
   for(int i=0;i<s1.length();i++)
   {
      string s="";
      for(int j=i;j<s1.length();j++)
      {
         s+=s1[j];
         if(s2.find(s)!= string::npos)
         cout<<s<<endl;
      }
   }
  // cout<<count;

  
 
	return 0;
}