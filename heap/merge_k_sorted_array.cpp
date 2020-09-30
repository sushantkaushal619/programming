#include<bits/stdc++.h>
using namespace std;
int *mergeKArrays(int arr[][], int k)
{
    int *a=new int[k*k];
    int i=0;
    priority_queue<pair<int,pair<int ,int>>,vector<pair<int,pair<int ,int>>>,greater<pair<int,pair<int ,int>>>> pq;
        for(int i=0;i<k;i++)
        {
            pq.push({arr[i][0],{i,0}});
        }
        
        while(!pq.empty())
        {
            int row=pq.top().second.first;
            int column=pq.top().second.second;
            int element=pq.top().first;
            column++;
            pq.pop();
           
            
                a[i]=element;
                i++;
                
                if(column<k)
                pq.push({arr[row][column],{row,column}});
        }
   
    return a;
    
}



int main()
{
    return 0;
}