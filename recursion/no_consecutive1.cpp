#include<iostream>

using namespace std;
void solve(int one,int zero,int n,string op,int &count)
{
    if(n==0)
    {
        cout<<op<<endl;
        count++;
        return ;
    }
    
        string op1=op;
        op1.push_back('0');
        solve(one,zero+1,n-1,op1,count);
        
        
  
    if()
    {
        string op2=op;
        op2.push_back('1');
        solve(one+1,zero,n-1,op2,count);
    }
    

}
int main()
{
    int n;
    cin>>n;
    string op="";
    int one=0;
    int zero=0;
    int count=0;
    solve(one,zero,n,op,count);
    cout<<count;
}