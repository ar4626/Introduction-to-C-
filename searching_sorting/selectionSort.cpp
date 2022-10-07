#include<iostream>
using namespace std;

int selection(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
    int min= arr[j],minInd=j;
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            minInd=i;
        }
    }
    int temp=arr[j];
    arr[j]=min;
    arr[minInd]=temp;
    }

}

int main()
{
    int n;
    cout<<"Enter the number of element in arry "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }

};
