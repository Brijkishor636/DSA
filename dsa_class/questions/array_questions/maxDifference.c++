#include<iostream>
#include<vector>
using namespace std;

int maxDiff(vector<int>&arr){
    int maxi = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            maxi = max(maxi, arr[j]-arr[i]);
        }
        
    }
    return maxi;
    
}

int main(){
    vector<int> arr = {9, 5, 8, 12, 2, 3, 7, 4};
    int value = maxDiff(arr);
    cout<<value<<endl;
}