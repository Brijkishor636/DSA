#include<iostream>
using namespace std;

void reverse(int n){
    if (n >= 1)
    {
        int b = n % 10;
        cout<<b;
        reverse(n/10);
    }
    
}

int main(){
    int n;
    cout<<"Enter a number :- "<<endl;
    cin>>n;

    reverse(n);
}