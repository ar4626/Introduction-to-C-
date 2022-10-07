#include<iostream>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
 
    int j=0,k=0;
    if(size1>0 && size2>0)
    {
    for(int i=0;i<size1+size2;i++)
    {
        if(arr1[j]<arr2[k])
        {
            ans[i]=arr1[j];
            j++;
        }
        else
        {
            ans[i]=arr2[k];
            k++;
        }
    }
    }
    else if(size1==0)
    {
        int a=0;
        for(int i=0;i<size2;i++)
        {
            ans[a]=arr2[i];
            a++;
        }
    }
    else if(size2==0)
    {
        int a=0;
        for(int i=0;i<size1;i++)
        {
            ans[a]=arr1[i];
            a++;
        }
    }
}

int main()
{
    int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1 + size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}
}