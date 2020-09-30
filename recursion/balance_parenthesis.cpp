#include<iostream>
using namespace std;

void solve(int open,int close,string op)
{
   // cout<<open<<" "<<close<<endl;
    if(open==0 && close==0)
    {
        //cout<<"hii";
        cout<< op <<endl;
        return;
    }

    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
       solve(open-1,close,op1);

    }
    if(close>open)
    {
        
        string op2=op;
        op2.push_back(')');
        // close--;
       solve(open,close-1 ,op2);
    }
    return;
    
}

int main()
{
    int n=3;
    int open=n;
    int close=n;
    string op="";
    solve(open,close,op);
return 0;
}