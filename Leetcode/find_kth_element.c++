#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int find_kth_Element(vector<int>&arr, int k){
    int count = 1;
    vector<int>nums;
    int i = 0;
    while(i < arr.size() || nums.size() <= k){
        if(arr[i] != count){
            nums.push_back(count);
        }
        else{
            i++;
        }
        count++;
    }
    return nums[k-1];
}

int main(){
    vector<int>arr = {2,3,4,7,11};
    int k = 5;
    cout<<"Element is :- "<<find_kth_Element(arr, k);
}
