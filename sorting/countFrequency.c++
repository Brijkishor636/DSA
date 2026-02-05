#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {10, 5, 10, 15, 5, 10};
    int n = 6;
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}