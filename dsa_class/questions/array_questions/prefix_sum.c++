#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {3,6,7,9,12};
    int n = arr.size();
    vector<int> prefix;

    prefix.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        prefix.push_back(prefix[i-1] + arr[i]);
    }
    printVector(prefix);
}