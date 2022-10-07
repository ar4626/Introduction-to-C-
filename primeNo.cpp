#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int d=2,count=0;
    while(d<n)
    {
        if(n%d==0)
        {
            count++;
        }
        d++;

    }
    if(count>0)
    cout<<"Not a Prime Number";
    else 
    cout<<"Prime Number";
}