#include<iostream>
using namespace std;
int main()
{
    int i=1, j,n,l=0;
    cout<<"Enter the no of rows"<<endl;
    cin>>n;
    int k=n;
    while(i<=n)
    {
        for(j=1;j<k;j++)
        {
            cout<<" ";
        }
        k--;
        l=i;
        for(j=1;j<=i;j++)
        {
            cout<<l++;
        }
        cout<<endl;
        i++;
    }
}