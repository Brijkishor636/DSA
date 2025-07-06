#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,0,3,4,6,5,0,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }       
    } 
    
    int n2 = max+1;
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

     for (int i = 0; i < n2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    int size = n+1;
    int arr4[size];
    for (int i = 0; i < n; i++)
    {
        arr4[arr3[arr[i]]] = arr[i];
        arr3[arr[i]]--;
    }
    
    cout<<"Printing the sorted array :- "<<endl;
    for (int i = 1; i < size; i++)
    {
        cout<<arr4[i]<<" ";
    }
    
}


