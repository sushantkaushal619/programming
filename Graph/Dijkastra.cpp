#include<bits/stdc++.h>
#include<iostream>
#include<limits>
using namespace std;
vector <pair<long,int>> adj[3005];
long dist[3005]={1234};
bool vis[3005];
void shortest(int s)
{
    
     memset(vis, false, sizeof(vis));
     //memset(dist, 65535, sizeof(dist));
     dist[s] = 0;
     for(int i=1;i<=3005;i++)
    {
        dist[i]=999999999;
    }
     multiset <pair <long, int>> st;
     st.insert({0,s});
     while(!st.empty())
     {
         pair<long, int> p = *st.begin();
         
         int x = p.second;//vertex
         int w = p.first;//weight
         st.erase(st.begin());
         cout<<" vertex is :"<<x<<endl;
         
         if(vis[x])
          continue;

         vis[x] = true;
        
         for(long i=0;i<adj[x].size();i++)
         {
             
             int e = adj[x][i].first;//vertex
             int we = adj[x][i].second; //weight

             cout<<" inside vertex is :"<<e<<endl;
             if((dist[w]+we) < dist[e])
             {
                 dist[e] = dist[w] + we;
                 cout<<" distance of vertex is :"<<dist[e]<<endl;
                 st.insert({dist[e],e});
             }
         } 
     }
}
int main()
{
//memset(dist, 65535, sizeof(dist));
for(int i=1;i<=5;i++)
    {
        cout<<dist[i]<<" ";
    }

   int t, n, m, x, y, s;
    long z;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=0;i<m;i++)
        {
            cin >> x >> y >> z;
            adj[x].push_back(make_pair(y,z));
            adj[y].push_back(make_pair(x,z));
        }
        cin >> s;
        shortest(s);
        for(int i=1;i<=n;i++)
        {
            if(i!=s)
            {

                cout << dist[i] <<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            adj[i].clear();
        }
    }   
    return 0;
}