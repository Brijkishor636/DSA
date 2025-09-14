#include<iostream>
using namespace std;

template <class T, class U>

void swap(T &a, U &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    float a = 6.9, b = 8.9;
    swap(a, b);
    cout<<"value of a :- "<<a<<endl;
    cout<<"value of b :- "<<b<<endl;
}