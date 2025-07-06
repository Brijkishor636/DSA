#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(7);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(9);
    s.insert(9);

    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>:: iterator i= s.begin();
    i++;

    s.erase(i);

    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Is there -7 or not :- "<<s.count(-7);

}