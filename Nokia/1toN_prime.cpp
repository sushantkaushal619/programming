#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=100;
    bool prime[n+1];
    memset(prime,true,n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for (int  j = i*i; j<=n ;j=j+i)
            {
               prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        
        if(prime[i]==true)
        cout<<i<<" ";
    }
    return 0;
}

//O(n*log(logn))