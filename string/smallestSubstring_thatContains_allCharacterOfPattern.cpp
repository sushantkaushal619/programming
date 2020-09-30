//Smallest Sub-string which contains all the characters of given Pattern


#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    string s="defabc";
    string pattern="abc";
    unordered_map<char,int>m;
    int minSubstringLength= 65534;
    int matchedElement=0;
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
            if(m[s[i]]>=0)
                matchedElement++;

        }
     while(matchedElement==pattern.length())
        {
            cout<<"matched length:"<<minSubstringLength<<endl;
              if(i-start+1<minSubstringLength) 
                {
                    minSubstringLength=i-start+1;
                    startLength=start;

                } 
                if(m.find(s[start])!=m.end())
                {
                    if(m[s[start]]==0)
                    {
                        matchedElement--;
                    }
                m[s[start]]++;
                }  
                 start++;
        }  
    }
    if(minSubstringLength>s.length())
    {
        cout<<"NO String exist";
    }

    else
    cout<<s.substr(startLength,minSubstringLength);

    return 0;

}