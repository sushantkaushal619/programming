#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

/*int longestPalindromeSubstring(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();
    int res=0;
    int dp[n+1][m+1];
    int one=0,notOne=0;
    for(int i=0;i<n+1;i++)
    {
        dp[0][i]=0;
        dp[i][0]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
               res=max(res,dp[i][j]);
    
            }
            else
            {
                dp[i][j]=0;
            }
            
        }
    }
    
    return  res;

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s1;
        cin>>s1;
        string s2=s1;
        reverse(s1.begin(), s1.end()); 
        int res=longestPalindromeSubstring(s1,s2);
        cout<<res<<endl;
        
    }
    
    return 0;
}*/

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
       // count++;
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
    cout<<count;

    return 0;
}