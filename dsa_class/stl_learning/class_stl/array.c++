#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 5> arr = {1,2,5,4,3};

    if(arr.empty()){
        cout<<"Array is empty"<<endl;
    }else{
        cout<<"Array is not empty"<<endl;
    }

    int sum = 0;
    sum = arr.front() + arr.back();
    cout<<"sum is "<<sum<<endl;

}