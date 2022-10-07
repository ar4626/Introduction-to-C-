#include <iostream>
using namespace std;
int main()
{
    // check prime 
    // int n;
    // cin>>n;

    // bool divided=false;
    // for(int d=2;d<n;d++)
    // {
    //     if (n%d==0)
    //     {
    //         divided=true;
    //     }
    // }
    // if (divided)
    // {
    //     cout<<"Not Prime"<<endl;
    // }
    // else
    // {
    //     cout<<"Prime"<<endl;
    // }

    // nthfibonacci number 
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cin>>n;
	for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }

}