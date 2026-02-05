#include<iostream>
#include<unordered_map>
using namespace std;

// int findPair(int arr[], int n, int target){
//     int count = 0;
//     unordered_map<int, int>mp;
//     for(int i = 0; i < n; i++){
//         int comp = target-arr[i];
//         if(mp.find(comp) != mp.end()){
//             count += mp[comp];   // add frequency
//         }
//         mp[arr[i]]++; 
//     }
//     return count;
// }

int findMostFreq(int arr[], int n){
    unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int ans = arr[0];

    for (auto &it : mp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        }
    }
    return maxFreq;
}

int main(){
    int n, target;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<findMostFreq(arr, n);
}