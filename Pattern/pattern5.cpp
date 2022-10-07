#include <iostream>
using namespace std;
int main()
{
    int i, j, n,k,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=n-i;k>0;k--)
        {
            cout<<"*";
        }
        for(l=n-i-1;l>0;l--)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}