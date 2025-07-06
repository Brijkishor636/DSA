#include<iostream>
using namespace std;

int getSum(int *arr, int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }

    return arr[0] + getSum(arr+1, n-1);
}

int main(){

    int arr[6] = {5,6,7,5,6,7};
    int n = 6;

    cout<<"Sum is :- "<<getSum(arr, n);
}