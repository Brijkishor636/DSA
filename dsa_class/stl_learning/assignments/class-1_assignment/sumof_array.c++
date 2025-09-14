#include<iostream>
using namespace std;

template <class V>
V sumofArray(int arr[], int n){
    V sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int arr[100]; 
    int n;
    cout<<"Enter the size of the array :- "<<endl;
    cin>>n;

    cout<<"Enter the array :- "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Sum is :- "<<sumofArray<int>(arr, n)<<endl;

    return 0;
}

