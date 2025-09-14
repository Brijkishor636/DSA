#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(int arr[], int n, int target){
    vector<int> arr2;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((arr[i] + arr[j]) == target){
                arr2.push_back(i);
                arr2.push_back(j);
                return arr2;
            }
        }
        
    }
    return {};

}

int main(){
    int arr[4] = {2, 6, 8, 3};
    int n = 4;

    vector<int> arr4 = twoSum(arr, n, 9);

    for (int i = 0; i < arr4.size(); i++)
    {
        cout<<arr4[i]<<" ";
    }
    
}