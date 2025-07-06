#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array :- "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr, n);
    print(arr, n);
}