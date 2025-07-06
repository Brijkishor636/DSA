#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void selectionSort(int *arr, int n){
    
//     for (int i = 0; i < n-1; i++)
//     {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++)
//         { 
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);

//     }
      
// }


void selectionSort(int *arr, int n){
    if(n == 0 || n == 1){
        return;
    }

    int i = 0, j = i+1, min = 0;
    while (i < n-1)
    {
        if(arr[j] < arr[min]){
            min = j;
        }
        i++;
        j++; 
    }
    
    swap(arr[0], arr[min]);

    selectionSort(arr+1, n-1);
    
}

int main(){
    int arr[] = {5,96,7,6,5,4876,32,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
}