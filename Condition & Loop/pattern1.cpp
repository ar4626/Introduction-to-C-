#include<iostream>
using namespace std;
int main()
{
    int i=1, j,k,n;
    cout<<"Enter the no of rows"<<endl;
    cin>>n;
    while(i<=n)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            cout<<k++;
        }
        cout<<endl;
        i++;
    }
}
