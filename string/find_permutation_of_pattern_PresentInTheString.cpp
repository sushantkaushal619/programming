#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    string s="abcabc";
    string pattern="abc";
    unordered_map<char,int>m;
    int maxLength=0;
    int startLength=0,endLength=0;
    int start=0;

    for(int i=0;i<pattern.length();i++)
    {
        m[pattern[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())//if present in the map
        {
            m[s[i]]--;
            if(m[s[i]]==0)
                maxLength++;

        }
        if(maxLength==m.size())
        {
            startLength=start;
            endLength=i;
            cout<<s.substr(startLength,endLength-startLength+1)<<endl;
        }
        if(i>=pattern.length()-1)
        {
            if(m.find(s[start])!=m.end())
            {
                if(m[s[start]]==0)
                maxLength--;
            }
            m[s[start]]++;
            start++;
            
        }
        
    }

    return 0;

}