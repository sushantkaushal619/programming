#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n],dep[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>dep[i];
        }
        sort(arr,arr+n);
        sort(dep,dep+n);


        int max_platform=1;
        int platfrom_needed=1;
        for(int i=1,j=0; i<n;)
        {
            if(dep[j]<arr[i])
            {
                max_platform= max_platform-1;
                j++;

            }

            else
            {
                max_platform= max_platform+1;
                if(max_platform>platfrom_needed)
                {
                    platfrom_needed=max_platform;
                }
                i++;
            }
            
        }
        cout<<platfrom_needed;


    }
    return 0;
}