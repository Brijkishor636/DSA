#include<iostream>
#include<queue>
#include<iterator>
using namespace std;

int main(){
    queue<int> d;
    d.push(5);
    d.push(2);
    d.push(7);
    d.push(6);


    while (!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop();
    }
    
    d.push(7);
    d.push(90);
    
    cout<<endl;
    while (!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop();
    }
}