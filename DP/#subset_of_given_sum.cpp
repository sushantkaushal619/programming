#include <bits/stdc++.h>
using namespace std;

int subset(int arr[], int sum, int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
        dp[0][i] = 0;
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n+5];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int sum;
	    cin >> sum;
	    int m = subset(arr, sum, n);
	    cout << m%(10^9 + 7) << endl;
	}

	return 0;
}