#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    cout<<"Finding 5 :-> "<<binary_search(v.begin(), v.end(), 5)<<endl;

    cout<<"lower bound :- "<<lower_bound(v.begin(), v.end(), 8)-v.begin()<<endl;


    string s = "abcdefghijklmnopqrstuvwxyz";
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    rotate(v.begin(), v.begin()+3, v.end());
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}