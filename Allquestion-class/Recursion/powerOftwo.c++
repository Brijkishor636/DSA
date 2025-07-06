#include<iostream>
#include<cmath>
using namespace std;

int power(int n){

    if(n == 0){
        return 1;
    }

    return 2 * power(n-1);
}

int main(){

    int n;
    cout<<"enter n:- "<<endl;
    cin>>n;

    cout<<power(n);
}