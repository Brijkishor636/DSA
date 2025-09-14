#include<iostream>
using namespace std;
#include<vector>

class Solution {
  public:
    bool solve(vector<int> &arr, int i, int j, int k){
        if(i > j){
            return false;
        }
        int mid = (i+j)/2;
        if(k == arr[mid]){
            return true;
        }
        else if(k > arr[mid]){
            solve(arr, mid+1, j, k);
        }
        else if(k < arr[mid]){
            solve(arr, i, mid-1, k);
        }

    }

    bool searchInSorted(vector<int>& arr, int k) {
        int i = 0; 
        int j = arr.size()-1;

        return solve(arr, i, j, k);
        
    }
};

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    Solution s1;
    cout<<s1.searchInSorted(arr, 8);
}