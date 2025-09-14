#include<iostream>
#include<stack>
using namespace std;

class SortedStack{
public:
    void sort(stack<int>s);
    void print(stack<int> &s){
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
};


void SortedStack ::sort(stack<int>s) {
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    
}

int main(){
    SortedStack s1;
    stack<int>s;
    s.push(41);
    s.push(3);
    s.push(32);
    s.push(2);
    s.push(11);
    cout<<"Before sorting :- "<<endl;
    s1.print(s);
    s1.sort(s);
    cout<<"After sorting :- "<<endl;
    s1.print(s);
}