#include<iostream>
using namespace std;

int binery(int arr[],int n,int num)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int mid=((h+l)/2);
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(arr[mid]<num)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of element in array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    int num;
    cin>>num;
    cout<<binery(arr,n,num);
    

}