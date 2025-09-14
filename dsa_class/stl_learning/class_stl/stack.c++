#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(9);
    s.push(5);
    s.push(4);
    s.push(6);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;
    cout<<"size is "<<s.size()<<endl;

    queue<int> q;
    
    
}