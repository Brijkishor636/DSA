#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

int pivotIndex(int arr[], int low, int high){
    
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i < j)
    {
        while (i <= j && pivot >= arr[i])
        {
            i++;
        }
        while (i <= j && pivot < arr[j])
        {
            j--;
        }
        
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);

    return j;
    
}

void quicksort(int arr[], int low, int high){

    if(low < high){
    int pivot = pivotIndex(arr, low, high);

    quicksort(arr, low, pivot-1);
    quicksort(arr, pivot+1, high);
    }
}

int main(){

    int arr[] = {10,12,15,6,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Printing the array :- "<<endl;
    printarray(arr, n);
    cout<<endl;

    cout<<"After sorting the array :- "<<endl;
    quicksort(arr, 0, n-1);
    printarray(arr, n);

    return 0;
}