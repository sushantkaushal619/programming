#include<iostream>
#include<stack>
using namespace std;

void solve(stack <int> &s)
{
    if(s.size()==0)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s);

    s.push(temp);
}

int main()
{
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    if(s.size()==0)
    {
    cout<<"stack is empty";
    return 0;
    }
   
    solve(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;

}