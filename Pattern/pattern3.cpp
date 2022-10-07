#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;

    // pattern 1
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // pattern 2
    // for(i=1;i<=n;i++)
    // {
    //     int k=i;
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<k++;
    //     }
    //     cout<<endl;
    // }

    // pattern 3
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
}