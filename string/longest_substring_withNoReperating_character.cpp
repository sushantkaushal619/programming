#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;
int main()
{
    string s="abccdefgggggabcdefghij";
    unordered_map<char,int> m;
    int n=s.length();
    int start=0,end=0;
    int maxLength=0;
    int printStart=0,printEnd=0;
    while(end<n)
    {
        // Not present in map
       if(m.find(s[end])==m.end())
       {
           m[s[end]]=end;   //push char, index of element

       }
       //present in the map
       else
       {
           // case1: bab
           //case 2: babccb
           int temp=m[s[end]]; //store the previous index of 'b'   
           start=max(temp+1,start);
           m[s[end]]=end;           // update the new index of 'b' in map
       }
      // maxLength=max(maxLength,end-start+1); //for length
      if(maxLength< end-start+1)//for length + print of sting 
        {
            maxLength=end-start+1;
            printStart=start;
            printEnd=end;
        }
       end++;
       
    }
    cout<<maxLength<<endl;
    for(int i=printStart;i<=printEnd;i++)
    {
        cout<<s[i];
    }
    return 0;
    

}
