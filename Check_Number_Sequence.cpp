#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int j=0;j<n-2;j++)
    {
        if(ar[j]>ar[j+1] && ar[j+1]<ar[j+2] || ar[j]<ar[j+1] && ar[j+1]>ar[j+2])
        {
            cout<<count++;
        }
    }
    if(count>=2)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
}