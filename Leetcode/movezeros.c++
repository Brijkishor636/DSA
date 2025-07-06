#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    // vector<int>nums = {8,0,6,0,2};

    // int count = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] == 0){
    //         count++;
    //     }
    // }

    // vector<int>second;
    // for(int i = 0; i < nums.size(); i++){
    //     if (nums[i] != 0)
    //     {
    //         second.push_back(nums[i]);
    //     }
        
    // }


    // for (int i = 0; i < count; i++)
    // {
    //     second.push_back(0);
    // }
    // nums.erase(nums.begin(), nums.end());
    
    // for(int i = 0; i < second.size(); i++){
    //     nums.push_back(second[i]);
    // }

    // for(int i: nums){
    //     cout<<i<<" ";
    // }


    //2nd solution---->

    vector<int>nums = {8,0,6,0,2};

    int i = 0; 

    for (int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != 0){
            nums.push_back(nums[i]);
        }
        
    }
    
    
}