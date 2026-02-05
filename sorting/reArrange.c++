#include<iostream>
#include<vector>
using namespace std;

void reArrange(int *arr, int n){
    vector<int> first;   // positives
    vector<int> second;  // negatives

    for(int i = 0; i < n; i++){
        if(arr[i] < 0)
            second.push_back(arr[i]);
        else
            first.push_back(arr[i]);
    }

    int i = 0, p = 0, q = 0;

    // alternate placement
    while(p < first.size() && q < second.size()){
        arr[i++] = first[p++];
        arr[i++] = second[q++];
    }

    // if extra positives remain
    while(p < first.size()){
        arr[i++] = first[p++];
    }

    // if extra negatives remain
    while(q < second.size()){
        arr[i++] = second[q++];
    }
}

int main(){
    int arr[] = {3,4,-1,9,-3,-2};
    int n = 6;

    reArrange(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
