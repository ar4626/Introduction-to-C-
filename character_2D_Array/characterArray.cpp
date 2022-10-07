#include<iostream>
using namespace std;

// 1D character arrays
// after storing name a null character "0" will be automatically assigned at the end
// thtis null character indicates the terminatiion of the string 

int length(char a[])
{
    int count = 0;
    for (int i=0;a[i] != '\0';i++)
    {
        count ++;

    }
    return count;
}

int main()
{
    char a[10];
    cin>>a;
    cout<<a<<endl;
    cout<<length(a)<<endl;
}