#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
    string a="abc";
    string b= "def";

    //add character to the string
    a.push_back('i');                     //to add single character
    cout<<a<<endl;

    a.insert(2,"raj");                    //can add multiple characters
    cout<<a<<endl;

    //remove character from the string
    a.pop_back();                          //remove last character
    cout<<a<<endl;

    a.erase(2,1);                  // a.erase(index,count)
    cout<<a<<endl;

}