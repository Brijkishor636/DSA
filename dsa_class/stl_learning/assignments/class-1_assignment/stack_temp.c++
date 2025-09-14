#include<iostream>
#include<stack>
using namespace std;

template<class T>
void stack2(){
    stack<T>s;
    T x = 0;
    for(int i = 0; i < 5; i++){
        cin>>x;
        s.push(x);
    }

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    
    stack2<int>();
}