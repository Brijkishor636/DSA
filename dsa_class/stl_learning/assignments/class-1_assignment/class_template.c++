#include<iostream>
using namespace std;

class Base{
    public: 
        int x;
    void setData(){
        cout<<"Enter the value of x :- "<<endl;
        cin>>x;
    }

    void getData(){
        cout<<"Value of x is :- "<<x<<endl;
    }
};

template<class V>

class Derived:public Base{
    public: 
        V y; 
    void setData2(){
        setData();
        cout<<"Enter y :- "<<endl;
        cin>>y;
    }

    void printData(){
        getData();
        cout<<"Value of y is :- "<<y<<endl;
    }

};

int main(){
    Derived <int>d;
    d.setData2();
    d.printData();

    return 0;
}