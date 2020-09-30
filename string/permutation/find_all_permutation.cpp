
//**************Time O(n*n!)*********************
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<unordered_set>

using namespace std;
void swap(string &s,int i,int j)
{
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;

}
void permutation(string s,int i,int n,int &count)
{
    
    if(i==n)
    {
    count++;
    cout<<s<<endl;
    }
    else
    {
        for(int j=i;j<=n;j++)
        {
            // if(i!=j)
            // {
            //     if(s[i]==s[j])
            //     continue;
            // }
            swap(s,i,j);
            permutation(s,i+1,n,count);
            swap(s,i,j); 
        }
    }
    
}
int main()
{
    string s="1234";
    
    int n=s.length();
    int i=0;
    int count=0;
    permutation(s,i,n-1,count);
    cout<<count;
   
    return 0;

}