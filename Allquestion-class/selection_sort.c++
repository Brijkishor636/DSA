#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            j++;
        }
        swap(arr[i], arr[minIndex]);     
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

    selection_sort(arr, n);
    print(arr, n);

}