// Find the longest substring with k unique characters in a given string 
        //(OR)
//Find longest sub-string length with K distinct characters

#include<iostream>
#include<string>
#include<map>

using namespace std;
int main()
{
    string s="abcbdbdbbdcdabd";
    int k=3;
    map<char,int> m;
    int n=s.length();
    int start=0,end=0;
    int maxLength=0;
    int printStart=0,printEnd=0;

    while(end<n)
    {
        m[s[end]]++;
        while(m.size()>k)
        {
            m[s[start]]--;
            if(m[s[start]] == 0)
            m.erase(s[start]);
            
            start++;
        }
       // cout<<"start is: "<<start<<endl;
        if(maxLength< end-start+1)
        {
            maxLength=end-start+1;
            printStart=start;
            printEnd=end;
        }
       // maxLength=max(maxLength, end-start+1);
        //cout<<maxLength<<endl;
        end++;
       // cout<<"i is: "<<end<<endl;
    }
    for(int i=printStart;i<=printEnd;i++)
    {
        cout<<s[i];
    }
    cout<<maxLength<<endl;
    return 0;

}
