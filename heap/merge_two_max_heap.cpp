#include<iostream>
using namespace std;

void maxHeapify(int arr[],int i,int n)
{
    if(i>n)
    return;

    int max=i;
    int left=i*2+1;
    int right=i*2+2;
    //check left child
    if(left<n && arr[i]<arr[left])
    {
        max=left; //left child >root;
    }

    //check right child
    if(right<n && arr[max]<arr[right])
    {
        max=right;  //right child > root
    }

    
    if(max!=i) 
    {
        //swap
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
        maxHeapify(arr,max,n);
    }
    
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n1,n2;
        cin>>n1>>n2;
        int arr1[n1];
        int arr2[n2];
        int arr[n1+n2];
        int index=0;
        
        for(int i=0;i<n1;i++)
        {
            cin>>arr1[i];
            arr[index++]=arr1[i];
        }
        for(int i=0;i<n2;i++)
        {
            cin>>arr2[i];
            arr[index++]=arr2[i];
        }
        int n=n1+n2;
        
        for(int i=n/2-1;i>=0;i--)
        {
            maxHeapify(arr,i,n);
        }
        cout<<" array is"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;

}