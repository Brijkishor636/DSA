#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl; 
}

void heapify(int arr[], int i, int n){
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int max = i;
    if(left < n && arr[left] > arr[max]){
        max = left;
    }
    if (right < n && arr[right] > arr[max])
    {
        max = right;
    }
    if (max != i)
    {
        swap(arr[i], arr[max]);
        heapify(arr, max, n);
    }
    
}

void build_heap(int arr[], int n){

    int start = n/2;

    for (int i = start; i >=0; i--)
    {
        heapify(arr,i , n);
    }
    
}

void sort_heap(int arr[], int n){
    
    build_heap(arr, n);

    for (int i = n-1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);

        build_heap(arr, i);
    }    
     
}

int main(){

    int arr[] = {4,1,3,2,16,9,10,14,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Printing the array :- "<<endl;
    print(arr, n);

    cout<<"Printing array after heapify :- "<<endl;
    sort_heap(arr, n);
    print(arr, n);

    return 0;
}