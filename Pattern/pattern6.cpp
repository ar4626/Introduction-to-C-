#include<iostream>
using namespace std;
int main()
{
    int i, j, n,k,l;
    cin>>n;
    int q=(n/2)+1;
    // Isosceles Triangle
    for(i=1;i<=q;i++)
    {
        for(k=q-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(l=1;l<i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=q-1;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(k=q-1-i;k>0;k--)
        {
            cout<<"*";
        }
        for(l=q-i;l>0;l--)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}