#include<iostream>
using namespace std;

// in 2d array first box represent row & 2nd represent column

int main()
{  
    int n,m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Enter the number of column"<<endl;
    cin>>m;
    int arr[n][m];

// for taking input of 2d array 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

// for printing the 2d array

    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}