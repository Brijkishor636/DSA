#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void insertionSort(int *arr, int n){
//     for (int i = 1; i < n; i++)
//     {
//         int j = i-1;
//         int temp = arr[i];
//         while (temp < arr[j] && j >= 0)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;     
//     }
    
// }


void insertionSort(int *arr, int n){
    if(n <= 1){
        return;
    }

    insertionSort(arr, n-1);
    cout<<"Inside :- "<<endl;
    printArray(arr, n);
    int temp = arr[n-1];
    int j = n-2;

    while(temp < arr[j] && j >= 0){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;

}

int main(){
    int arr[] = {5,96,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);
}