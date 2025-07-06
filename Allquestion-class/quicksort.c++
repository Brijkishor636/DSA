#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int pivotIndex(int arr[], int low, int high){
    int p = low;
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        while (i <= high && arr[i] <= arr[p])
        {
            i++;
        }
        while (arr[j] > arr[p])
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
              
    }
    swap(arr[j], arr[p]);

    return j;  
}

void quicksort(int arr[], int i, int j){
    if (i < j)
    {
        int pivot = pivotIndex(arr, i, j);
        quicksort(arr, i, pivot-1);
        quicksort(arr, pivot+1, j);
    }
    
}

int main(){

    int arr[] = {9,8,7,6,5,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);
    print(arr, n);

}