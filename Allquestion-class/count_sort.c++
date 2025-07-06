#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;  
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

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        } 
    }

    int n2 = max + 1;

    int arr2[n2] = {0};
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    
    int arr3[n2];
    for (int i = 0; i < n2; i++)
    {
        arr3[i] = arr2[i] + arr3[i-1];
    }
    
    int arr4[n];
    for (int i = n-1; i >= 0; i--)
    {
        arr4[arr3[arr[i]]-1] = arr[i];
        arr3[arr[i]]--;
    }
    
    printarray(arr4, n);
    
}