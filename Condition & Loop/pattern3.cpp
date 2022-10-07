#include<iostream>
using namespace std;
int main()
{
    int i=1, j,n;
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
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        i++;
    }
}