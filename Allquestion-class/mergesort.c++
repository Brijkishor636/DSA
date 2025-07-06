#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = 0;
    int arr2[high-low+1];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arr2[k++] = arr[i++];
        }
        else{
            arr2[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        arr2[k++] = arr[i++];
    }
    while (j <= high)
    {
        arr2[k++] = arr[j++];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[low + i] = arr2[i];
    }
      
}

void mergesort(int arr[], int i, int j){
    
    if (i < j)
    {
        int mid = (i+j)/2;
        mergesort(arr, i, mid);
        mergesort(arr, mid+1, j);
        merge(arr, i, mid, j);
    }
}

int main(){
    int arr[] = {16,8,14,12,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, 0, n-1);
    print(arr, n);
}