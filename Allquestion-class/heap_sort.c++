#include<iostream>
using namespace std;

void print_heap(int arr[], int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void heapify(int arr[], int n, int i){
    int max = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l < n && arr[l] > arr[max])
    {
        max = l;
    }
    if (r < n && arr[r] > arr[max])
    {
        max = r;
    }
    if (max != i)
    {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
      
}

void build_heap(int arr[], int n){
    for (int i = n/2; i > 0 ; i--)
    {
        heapify(arr, n, i);
    }
    
}

void heap_sort(int arr[], int n){
    build_heap(arr, n);
    for (int i = n; i > 1; i--)
    {
        swap(arr[i], arr[1]);
        heapify(arr, i-1, 1);
    }
    
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the tree :- "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    
    heap_sort(arr, n);
    print_heap(arr, n);
}