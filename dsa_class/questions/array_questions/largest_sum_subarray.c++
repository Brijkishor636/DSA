#include<iostream>
#include<vector>
using namespace std;

// 1st method------>

int largestSum(vector<int>&arr){
    int maxi = 0;
    
    for (int i = 0; i < arr.size()-1; i++)
    {
        int prefix = 0;
        for (int j = i; j < arr.size(); j++)
        {
            prefix += arr[j];
            maxi = max(prefix, maxi);
        }
    }
    return maxi;
}


// optimized method ------>
int largestSum2(vector<int>&arr){
    int prefix = 0;
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix += arr[i];
        if(prefix < 0){
            prefix = 0;
        }
        maxi = max(prefix, maxi);
    }
    return maxi;
}

int main(){
    vector<int> arr = {4, -6, 2, 8};
    int value = largestSum2(arr);
    cout<<value<<endl;
}