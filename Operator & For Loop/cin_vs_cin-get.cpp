#include <iostream>
using namespace std;
int main()
{
    // char c;
    // cin>>c;
    // int count=0;
    // while(c!='$')
    // {
    //     count++;
    //     cin>>c;
    // }
    // cout<<count;

    char c;
    c=cin.get();
    int count=0,space=0,alpha=0;
    while(c!='$')
    {
        c=cin.get();
        if(c==" ")
        {
            space++;
        }
        else if(c=={'1','2','3','4','5','6','7','8','9'})
        {
           count++;
        }
        else{
            alpha++;
        }
    }
    cout<<count;
}

// cin ignores space and new line 