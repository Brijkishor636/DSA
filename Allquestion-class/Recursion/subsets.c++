#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<vector<int>> &ans) {
    for (const auto& row : ans) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << "-----" << endl;
}


void solve(vector<vector<int>> &ans, int index, vector<int> output, vector<int> nums){

    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude ---->
    solve(ans, index+1, output, nums);

    // include ---->

    int element = nums[index];
    output.push_back(element);
    solve(ans, index+1, output, nums);

    printArray(ans);

}

vector<vector<int>>subsets(vector<int> &nums){
    vector<vector<int>> ans;
    int index = 0;
    vector<int> output;
    solve(ans, index, output, nums);
    return ans;
}

int main(){

    vector<int> nums = {1,2,3};
    subsets(nums);


}