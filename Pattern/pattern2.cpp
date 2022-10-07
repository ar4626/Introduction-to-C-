#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;

    // pattern 1
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // pattern 2
    // for(i=0;i<n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(i=0;i<n;i++)
    {
        for(j=n;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

}