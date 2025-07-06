#include<iostream>
#include <vector>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] <= arr[min])
            {
                min = j;
            }
            
        }
        swap(arr[min], arr[i]);  
    }
    
}

void insertionsort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;     
    }
    
}

int main(){
    int arr[] = {10,9,5,3,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    cout<<"Printing the array :- "<<endl;
    printarray(arr, n);

    cout<<"After selectionsort :- "<<endl;
    selectionsort(arr, n);
    printarray(arr, n);

    cout<<"After insertionsort :- "<<endl;
    insertionsort(arr, n);
    printarray(arr, n);
}