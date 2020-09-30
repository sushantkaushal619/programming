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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n/2-1;i>=0;i--)
    {
        maxHeapify(arr,i,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}