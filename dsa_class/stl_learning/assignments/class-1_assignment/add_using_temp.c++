#include<iostream>
using namespace std;

template<class T, class V, class U>

T add(V a, U b){
    return (a+b);
}

int main(){

    cout<<"Sum is :- "<<add<float, float, int>(7.5,8);
}