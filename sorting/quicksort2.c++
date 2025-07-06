#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    
    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= low && arr[j] > pivot)
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

void quicksort(int arr[], int i, int j){
    if (i < j)
    {
        int pivot = partition(arr, i, j);
        quicksort(arr, i, pivot-1);
        quicksort(arr, pivot+1, j);
    }
    
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr[] = {7,12,15,6,3,5,4};
    int n = 7;

    printarray(arr, n);
    quicksort(arr, 0, n-1);
    printarray(arr, n);

}