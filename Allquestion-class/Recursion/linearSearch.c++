#include<iostream>
using namespace std;

bool isPresent(int *arr, int n, int num){
    if(n == 0){
        return false;
    }
    if(arr[0] == num){
        return true;
    }

    return isPresent(arr+1, n-1, num);
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int num = 8;

    if(isPresent(arr,n, num)){
        cout<<"Number is present.";
    }
    else{
        cout<<"Number is absent.";
    }
}