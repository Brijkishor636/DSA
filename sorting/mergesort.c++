#include <iostream>
using namespace std;

// Function to merge two subarrays of arr[]
// First subarray is arr[low..mid]
// Second subarray is arr[mid+1..high]
void merge(int arr[], int low, int mid, int high) {
    
    int i = low;
    int j = mid+1;
    int k = 0;
    int arr2[high-low+1];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arr2[k++] = arr[i++];
        }
        else{
            arr2[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        arr2[k++] = arr[i++];
    }
    while (j <= high)
    {
        arr2[k++] = arr[j++];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[low + i] = arr2[i];
    }
    
}


// void merge(int arr[], int low, int mid, int high) {
//     int n1 = mid - low + 1; // Size of the left subarray
//     int n2 = high - mid;    // Size of the right subarray

//     int arr2[high - low + 1];  // Temporary array to store merged elements

//     int i = low;      // Starting index for the left subarray
//     int j = mid + 1;  // Starting index for the right subarray
//     int k = 0;        // Index for the temporary array

//     // Merge the two subarrays
//     while (i <= mid && j <= high) {
//         if (arr[i] <= arr[j]) {
//             arr2[k++] = arr[i++];
//         } else {
//             arr2[k++] = arr[j++];
//         }
//     }

//     // Copy any remaining elements from the left subarray
//     while (i <= mid) {
//         arr2[k++] = arr[i++];
//     }

//     // Copy any remaining elements from the right subarray
//     while (j <= high) {
//         arr2[k++] = arr[j++];
//     }

//     // Copy the sorted subarray back to the original array
//     for (int i = 0; i < k; i++) {
//         arr[low + i] = arr2[i];
//     }
// }


// Function to divide the array into two halves and merge them
void mergesort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;  // Avoids overflow for large `low` and `high`

        // Sort the first and second halves
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        // Merge the two halves
        merge(arr, low, mid, high);
    }
}

// Function to print the array
void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: \n";
    printarray(arr, n);

    mergesort(arr, 0, n - 1);

    cout << "\nSorted array is: \n";
    printarray(arr, n);

    return 0;
}
