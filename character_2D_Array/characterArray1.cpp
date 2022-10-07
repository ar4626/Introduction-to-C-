#include<iostream>
using namespace std;

// if there is any space,tab,\n in the input then the string stop taking input
// we can use another function cin.getline(string_name, len)

int main()
{
    char a[100];
    // cin>>a;
    cin.getline(a,100,'i');
    // cin.getline(string_name,length,delimiter)
    // It means it will  read length-1 character
    cout<<a<<endl;
    cin.getline(a,4);
    cout<<a<<endl;

}
