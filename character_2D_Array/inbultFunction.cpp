#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[100];
    char ar[100];
    cin>>arr;
    cin>>ar;

// 'strlen' function is used to find the length of the string 
// for strlen we have to include 'cstring'

    int len=strlen(arr);
    cout << len <<endl;

// strcmp is used to compare two string if they are equal or not 
// if it return 0 they are equal 

    cout<<strcmp(arr,ar)<<endl;

// strcpy is used to copy the content of one string to another 

    strcpy(arr,ar);
    cout<<arr;

}