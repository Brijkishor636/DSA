#include<iostream>
#include<cmath>
using namespace std;

void reverseNumber(int n){

    if(n == 0){
        return;
    }

    cout << n % 10;
    reverseNumber(n/10);
    
}

int main(){
    int n;
    cin>>n;

    reverseNumber(n);
}