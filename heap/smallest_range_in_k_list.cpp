#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int arr[k][n];
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        priority_queue<pair<int,pair<int ,int>>,vector<pair<int,pair<int ,int>>>,greater<pair<int,pair<int ,int>>>> pq;
        int max=0,min,range,minRange,maxRange,finalRange=INT_MAX;
        for(int i=0;i<k;i++)
        {
            pq.push({arr[i][0],{i,0}});
            if(arr[max][0]<arr[i][0])
            {
                max=i;
            }
        }
        max = arr[max][0];
        
       while(true)
        {
            min=pq.top().first;
            range=max-min;
            cout<<"max : "<<max<<endl;
            if(finalRange>range)
            {
                minRange=min;
                maxRange=max;
                finalRange=range;
                cout<<range<<endl;
                cout<<minRange<<" , "<<maxRange<<endl;

            }
           int row=pq.top().second.first;
           int column=pq.top().second.second;
           pq.pop();
           
    
           int elementToBePushed=arr[row][column+1];

           if(elementToBePushed>max)
           max=elementToBePushed;

           pq.push({elementToBePushed,{row,column+1}});
           if(column+1 ==n)
           break;
        }
        

    }
    return 0;
}