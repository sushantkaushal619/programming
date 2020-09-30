#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="aaaaa";
    int n=s.length();
    bool dp[n][n]={0};
    int maxLength=0;
    int start=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
       count++;
    }

    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
        dp[i][i+1]=1;
        maxLength==2;
        start=i;
        count++;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(s[i]==s[j] && dp[i+1][j-1]==1)
            {
                count++;
                dp[i][j]=1;
                if(k>maxLength)
                {
                    maxLength=k;
                    start=i;
                }

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
    cout<<s.substr(start,maxLength)<<endl;
    cout<<count;

    return 0;
}