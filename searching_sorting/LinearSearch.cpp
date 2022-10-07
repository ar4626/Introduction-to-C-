#include<iostream>
using namespace std;

int linear(int arr[],int n)
{
    for(int i=0; i<sizeof(arr);i++)
    {
        if(arr[i]==n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,num;
    cout<<"Enter the number of element in an Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched"<<endl;
    cin>>num;
    int index=linear(arr,num);
    if (index==-1)
    {
        cout<<"Element is not there in the array";
    }
    else 
    {
        cout<<"Element is present at index "<<index<<endl;
    }

}