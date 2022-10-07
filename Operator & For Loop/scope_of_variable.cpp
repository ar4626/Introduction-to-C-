#include <iostream>
using namespace std;
int main()
{
    // int i=10;
    // cout<<i<<endl;
    // if(i==10)
    // {
    //     int j=11;
    //     cout <<j;
    // }
    // else{
    //     int j=21;
    //     cout<<j;
    // }


    //     int a = 10;
    // if(a > 5) {
    //     int a = 100;
    // }
    // else {
    //     int a = 110;
    // }
    // cout << a << endl;
    // // here the output is 10 not 100 because of the scope


    
    int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
    }
}