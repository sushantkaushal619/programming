#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;   
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(auto ptr=mp.begin();ptr!=mp.end();ptr++)
    {
        pq.push({ptr->second,ptr->first});
        if(pq.size()>k)
        pq.pop();

    }
    while(!pq.empty())
    {
        cout<<pq.top().second<<" ";
        pq.pop();
    }
    

    return 0;
}