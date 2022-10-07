#include<iostream>
using namespace std;
int main()
{
    int i=1, j,k=0,n;
    cout<<"Enter the no of rows"<<endl;
    cin>>n;
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        i++;
    }
}