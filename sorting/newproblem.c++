#include<iostream>
using namespace std;

int main(){
    int arr[] = {6,5,4,6,8,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // for (int i = -1; i < n-1; i++)
    // {
    //     int count = 1;
    //     if (arr[i+1] > arr[i])
    //     {
    //         for (int j = i+1; j >= 0 ; j--)
    //         {
    //             if (arr[i+1] > arr[j])
    //             {
    //                 count++;
    //             }
                
    //         }
            
    //     }
    //     cout<<count<<" ";
            
    // }
    

    for (int i = 0; i < n; i++)
    {
        int j = i - 1;
        int count = 1;
        
        while (arr[i] >= arr[j] && j >= 0)
        {
            count++;
            j--;
        }
        cout<<count<<" ";
    }
    
}