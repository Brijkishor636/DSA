#include<iostream>
#include<set>
using namespace std;

int main(){

    set<float>s;
    s.insert(4.5);
    s.insert(9.5);
    s.insert(3.5);
    s.insert(2.5);
    s.insert(1.8);

    for(auto x = s.begin(); x != s.end(); x++){
        cout<<*x<<" ";
    }

    s.erase(2.5);
    cout<<endl;
    for(auto x = s.begin(); x != s.end(); x++){
        cout<<*x<<" ";
    }
}