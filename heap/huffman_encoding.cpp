#include<bits/stdc++.h>
using namespace std;
struct minHeapNode
{
    char data;
    int freq;
    minHeapNode *left,*right;
    minHeapNode(char data,int freq)
    {
        this->data=data;
        this->freq=freq;
        left=right=NULL;
    }

};

 struct compare
 {
     bool operator()(minHeapNode *l,minHeapNode *r)
     {
         return(l->freq > r->freq);
        
     }
 };

void printFreq(struct minHeapNode *root,string s)
{
    if(root==NULL)
    return;

    if(root->data!='$')
    {
        cout<<s<<" ";
    }
    printFreq(root->left,s+"0");
    printFreq(root->right,s+"1");
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        struct minHeapNode *top,*left,*right;

        string s="";
        cin>>s;
        
        int freq[s.length()];
        for(int i=0;i<s.length();i++)
        {
            cin>>freq[i];
        }
        
        priority_queue< minHeapNode*,vector<minHeapNode*>,compare> pq;

        for(int i=0;i<s.length();i++)
        {
            pq.push(new minHeapNode(s[i],freq[i]));
        }

        while(pq.size()!=1)
        {
            left=pq.top();
            pq.pop();
            right=pq.top();
            pq.pop();
            top=new minHeapNode('$',left->freq+right->freq);
            top->left=left;
            top->right=right;
            pq.push(top);

        }
        printFreq(pq.top(),"");

    }
    return 0;
}