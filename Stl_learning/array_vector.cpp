#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    // Array------>

    // array<int, 5> b = {6,7,4,5,0};

    // int size = b.size();
    // cout<<size<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"At 2nd index :- "<<b.at(2)<<endl;

    // cout<<b.front()<<endl;
    // cout<<b.back()<<endl;
    // cout<<b.empty()<<endl;



    // vector ----->

    vector<int> v;
    v.push_back(5);
    cout<<"Capacity :- "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity :- "<<v.capacity()<<endl;

    v.push_back(7);
    cout<<"Capacity :- "<<v.capacity()<<endl;
    cout<<"size :- "<<v.size()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    v.pop_back();
    v.clear();

    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<endl;
    vector<int> s(4, 3);
    
    for(int i:s){
        cout<<i<<" ";
    }

    vector<int> k(s);
    for(int i:k){
        cout<<i<<" ";
    }
    return 0;
}