#include<iostream>
using namespace std;

void reverseString(string &name, int i, int n){
    if(i > (n-i-1)){
        return;
    }

    cout<<name<<endl;

    swap(name[i], name[n-i-1]);
    i++;
    reverseString(name, i, n);
}

int main(){
    string name = "abcdefgh";

    reverseString(name, 0, name.size());
    cout<<name<<endl;
}