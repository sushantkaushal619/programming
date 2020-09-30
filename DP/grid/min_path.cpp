
//right ,bottom is allowed

#include<iostream>
#include<vector>
using namespace std;
int solve(int n,vector<vector<int>> &grid)
{
    int dp[n][n];
  
    dp[0][0]=grid[0][0];
    for(int i=1;i<n;i++)
    {
        dp[0][i]=dp[0][i-1]+grid[0][i];//row
         dp[i][0]=dp[i-1][0]+grid[i][0];//column
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=min(dp[i][j-1],dp[i-1][j])+grid[i][j];
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
    return dp[n-1][n-1];
}
int main()
{
    int n=2;
    vector<vector<int>> grid(n,vector<int>(n,0));
   // int grid[3][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<solve(n,grid)<<endl;
    return 0;
}