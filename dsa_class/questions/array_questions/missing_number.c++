#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int m = n+1;
        vector<int> arr(m, 0);
        
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]]++;
        }

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    vector<int>nums = {1,2,3,4,0};
    Solution s1;
    cout<<s1.missingNumber(nums);
}