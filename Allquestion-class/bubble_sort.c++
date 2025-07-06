#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
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

    bubble_sort(arr, n);
    print(arr, n);
    
}