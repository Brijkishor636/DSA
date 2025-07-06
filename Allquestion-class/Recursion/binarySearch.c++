#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int k){
    if(s > e){
        return -1;
    }
    int mid = (s+e)/2;

    if(arr[mid] == k){
        return mid;
    }
    if(k > arr[mid]){
        binarySearch(arr, mid+1, e, k);
    }
    else{
        binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[] = {5,6,7,8,9,20};
    int k = 18;
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 1, e = n;

    
}