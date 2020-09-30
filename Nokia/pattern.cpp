#include<bits/stdc++.h>
using namespace std;
int main()
{


                //* * * * *
                //* * * * *
                //* * * * *

    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


                //* * * * *
                //*       *
                //* * * * *

    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i==0 ||i==4 ||j==0||j==4)
    //         cout<<"*";
    //         else
    //         {
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }
    
                // *
                // * *
                // * * *
                // * * * *
// int n=4;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

               
                // ****
                // ***
                // **
                // *
int n=10; 
for(int i=n;i>0;i--)
{
    for(int j=0;j<i;j++)
    {
        if(i==n ||j==0||j==i-1)
            cout<<"*";
            else
            {
                cout<<" ";
            }
    }
    cout<<endl;
}

    return 0;
}
