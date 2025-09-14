#include<iostream>
#include<vector>
using namespace std;

// 1st method ---->

bool checkEqualSum(vector<int>&arr){
    int sum = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        sum = sum+arr[i];
        int sum2 = 0;
        for (int j = i+1; j < arr.size(); j++)
        {
            sum2 += arr[j];
        }
        
        if(sum == sum2){
            return true;
        }

    }
    return false;
}


// optimized method----->

bool checkEqualSum2(vector<int>&arr){
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }

    int prefix = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        prefix += arr[i];
        int sum2 = sum - prefix;

        if(sum2 == prefix){
            return true;
        }
    }
    
    return false;
}   

int main(){
    vector<int> arr = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = arr.size();

    if(checkEqualSum2(arr)){
        cout<<"Subarray with equal sum exists."<<endl;
    }
    else{
        cout<<"Subarray with equal sum not exists."<<endl;
    }
}