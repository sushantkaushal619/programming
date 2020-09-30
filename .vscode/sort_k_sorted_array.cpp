#include <iostream>
#include<queue>
using namespace std;

//time O(nlogk)

int main() 
{
    int test;
    cin>>test;
    while(test--)
    {
        priority_queue<int,vector<int>,greater<int>> minh;
        int n,k,j=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            minh.push(arr[i]);
            if(minh.size()>k)
            {
                arr[j++]=minh.top();
                minh.pop();
            }
        }
        while(!minh.empty())
        {
            arr[j++]=minh.top();
            minh.pop();
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
	//code
	return 0;
}