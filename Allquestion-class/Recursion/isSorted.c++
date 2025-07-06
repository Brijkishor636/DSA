#include<iostream>
using namespace std;

// int isSorted(int arr[], int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         if (arr[i] > arr[i+1])
//         {
//             return 0;
//         }
        
//     }

//     return 1;
    
// }

bool isSorted(int *arr, int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1, n-1);
    }
}

int main(){
    int arr[5] = {5,7,8,9,9};
    int n = 5;

    cout<<"is sorted "<<isSorted(arr, n);
}