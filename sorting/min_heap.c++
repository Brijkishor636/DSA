#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void min_heapify(int arr[], int i, int n){
    int left = 2 * i + 1;
    int right = 2*i + 2;

    int minIndex = i;

    if (left < n && arr[left] < arr[minIndex])
    {
        minIndex = left;
    }
    if (right < n && arr[right] < arr[minIndex])
    {
        minIndex = right;
    }

    if (minIndex != i)
    {
        swap(arr[i], arr[minIndex]);
        min_heapify(arr, minIndex, n);
    }
     
}

void buildmin_heap(int arr[], int n){

    int startIndex = (n/2)-1;
    for (int i = startIndex; i >= 0; i--)
    {
        min_heapify(arr, i, n);
    }
    
}

void min_heapsort(int arr[], int n){

    buildmin_heap(arr, n);
    for (int i = n-1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        min_heapify(arr, 0, i);
    }
    
}

int main(){
    int arr[] = {3,8,6,9,19,12,15,16,18,17,14,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Printing the array :- "<<endl;
    print(arr, n);

    cout<<"Printing array after min_heapify :- "<<endl;
    min_heapsort(arr, n);
    print(arr, n);
}