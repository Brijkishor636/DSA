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
    vector<int> suffix(n);

    suffix[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        suffix[i] = suffix[i+1] + arr[i];
    }
    
    printVector(suffix);
    
}