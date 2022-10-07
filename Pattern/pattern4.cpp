#include <iostream>
using namespace std;
int main()
{
  int i,j,n;
    cin>>n;
    // // pattern 1
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         char ch='A'+j;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    // pattern 2
    for(i=0;i<n;i++)
    {
        int k=i;
        for(j=0;j<n;j++)
        {
            char ch='A'+j+k;
            cout<<ch;
        }
        cout<<endl;
    }
}