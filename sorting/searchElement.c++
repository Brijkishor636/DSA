#include<iostream>
using namespace std;

int searchElement(int arr[], int n, int ele){
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 5, 6, 7, 2, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 10;

    cout<<searchElement(arr, n, ele);
}