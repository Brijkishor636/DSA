#include<iostream>
#include<vector>    
using namespace std;

int main(){
    vector<int>arr = {2,4,5,6,5,6};
    vector<int>suffix;
    int n = arr.size();

    suffix[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1]+arr[i];
    }

    cout<<"Printing suffix array :- "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}