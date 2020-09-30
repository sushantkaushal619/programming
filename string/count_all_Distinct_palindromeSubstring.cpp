#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main()
{
    string s="geek";
    int n=s.length();
    unordered_set<string> se;
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    int maxLength=0;
    int start=0;
    int count=0;
    

   for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
       count++;
      se.insert(s.substr(i,1));
    }

    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
        dp[i][i+1]=1;
        maxLength==2;
        start=i;
        se.insert(s.substr(i,2));
        count++;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(s[i]==s[j] && dp[i+1][j-1]==1) //here we did not find the max palindrome
                                            //because we hab=ve to check each and every palindrome string
            {
                count++;
                dp[i][j]=1;
                    maxLength=k;
                    start=i;
                se.insert(s.substr(start,maxLength));

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<se.size()<<endl;
    cout<<s.substr(start,maxLength)<<endl;
    for(auto p=se.begin();p!=se.end();p++)
    {
        cout<<*p<<" ";
    }
    
    return 0;
}