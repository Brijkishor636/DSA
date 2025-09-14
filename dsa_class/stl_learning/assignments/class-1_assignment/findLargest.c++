#include<iostream>
using namespace std;

template<class T, class U, class V>

T findMax(U a, V b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    cout<<"Maximum element is :- "<<findMax<float, float, float>(6.8,4.6);
}