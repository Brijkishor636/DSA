#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            evenSum = evenSum + arr[i];
        }
        else{
            oddSum = oddSum + arr[i];
        }
    }
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
}