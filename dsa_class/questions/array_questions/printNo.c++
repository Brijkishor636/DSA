#include<iostream>
using namespace std;

void printNo(int n){
    if(n == 0){
        return;
    }
    printNo(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the value of n :- "<<endl;
    cin>>n;

    printNo(n);
}