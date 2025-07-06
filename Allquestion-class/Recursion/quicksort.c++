#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

int partition(int *arr, int s, int e){

    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    while (s < pivotIndex && e > pivotIndex)
    {
        while (arr[s] < arr[pivotIndex])
        {
            s++;
        }
        while (arr[e] > arr[pivotIndex])
        {
            e--;
        }

        if(s < pivotIndex && e > pivotIndex){
            swap(arr[s], arr[e]);
        }
          
    }

    return pivotIndex;
    
    
}

void quickSort(int *arr, int i, int j){

    if(i >= j){
        return;
    }
    int pivot = partition(arr, i, j);
    quickSort(arr, i, pivot-1);
    quickSort(arr, pivot+1, j);
}

int main(){

    int arr[] = {8,10,6,8,14,14,6,6,14,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    printArray(arr, n);
}