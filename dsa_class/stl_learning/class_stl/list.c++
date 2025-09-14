#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main(){
    forward_list<float> l1;
    l1.assign({2.3,4.5,6.5,9.8,7.5});

    for(auto x = l1.begin(); x != l1.end(); x++){
        cout<<*x<<" ";
    }
    cout<<endl;

    forward_list<float> l2;
    l2.assign(l1.begin(), l1.end());

    for(auto x = l2.begin(); x != l2.end(); x++){
        cout<<*x<<" ";
    }
    cout<<endl;

    forward_list<float>:: iterator y;
    y = l2.begin();
    y = y++;
    y = y++;
    y = y++;
    
    l2.insert_after(y, 3);

    for(auto x = l2.begin(); x != l2.end(); x++){
        cout<<*x<<" ";
    }
    cout<<endl;

}