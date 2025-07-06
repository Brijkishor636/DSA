#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;

    d.push_back(4);
    d.push_front(8);
    d.push_back(7);
    d.pop_back();

    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"1 index :- "<<d.at(1)<<endl;

    cout<<"Is empty :- "<<d.empty()<<endl;

    cout<<"Before erase :- "<<d.size()<<endl;
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase :- "<<d.size()<<endl;
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;
    
}