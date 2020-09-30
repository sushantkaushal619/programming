#include<iostream>
#include<stack>
#include<set>
using namespace std;
set< string > s;
void printSubset(string ip,string op)
{
    
    if(ip.length()==0)
    {
        s.insert(op);
        //cout<<op<<" ";
        return ;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    printSubset(ip,op1);
    printSubset(ip,op2);
}

int main()
{
    string ip="abc";
    string op=" ";
    printSubset(ip,op);
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    s.clear();
    return 0;

}