#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    if(n == 0 || n == 1){
        return;
    }

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubbleSort(arr, n-1);
}

int main(){
    int arr[] = {5,9876,7,676,5,4,32,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);
}