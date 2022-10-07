#include <iostream>
using namespace std;
void inc(int a, int b[],int n)
    {
        a++;
        b[0]++;
    }

void rev(int arr[],int n )
{
    int i=0,j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int a=10;
    int b[10]={1,2,3,4,5};
    // inc(a,b,10);
    rev(b,5);
    print(b,5);
    // cout<< "a :"<<a<<endl;
    // cout<<"b[0] : "<< b[0]<<endl;

}