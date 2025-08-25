#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void printArray(vector<int>&arr){
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            if(nums[i+1] < nums[i]){
                arr.push_back(nums[i]);
                break;
            }
            else{
                arr.push_back(nums[i]);
            }
        }
        vector<int>result(n, 0);
        
        int k = arr.size();
        for(int i = 0; i < n; i++){
            result[i] = nums[(i+k)%n];
        }

        if(is_sorted(result.begin(), result.end()))
            return true;
        else
            return false;
    }
};

int main(){
    vector<int>nums = {3,4,5,1,2};
    Solution s1;
    cout<<"Array is sorted or not :- "<<s1.check(nums);
}