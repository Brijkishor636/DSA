#include<iostream> 
using namespace std;

template <class T, class U, class V, class W>

T findLargest(U a, V b, W c){
    if(a > b && a > c){
        return a;
    }
    else if(b > c && b > a){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    cout<<"Largest element is :- "<<findLargest<int, int, int, int>(81,23,609);
}