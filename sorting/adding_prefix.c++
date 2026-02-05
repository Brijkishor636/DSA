#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    str = "do not " + str;
    cout<<str;
}