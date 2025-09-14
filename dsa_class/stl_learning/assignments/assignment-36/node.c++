#include<iostream>
using namespace std;


int main(){
    int arr[5] = {1,4,5,3,6};
    int n = 5;

    for (int i = 2; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}