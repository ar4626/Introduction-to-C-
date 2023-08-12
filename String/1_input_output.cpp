#include <iostream>
using namespace std;

int main(){
    string name;
    int a;
    cin>>a;
    cin.ignore(1);              // use to ignore one characterfor the input 
    getline(cin, name);         //use to get the complete one line as an input string
    cout<<a<<endl; 
    cout<<"Hello "<<name<<endl;
    cout << name.at(2)<<endl;                //it also returns  if the index is out of range 
}
