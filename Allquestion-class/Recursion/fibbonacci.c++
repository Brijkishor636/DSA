#include<iostream>
using namespace std;


// Using for loop fibbonacci series ----->

int main(){

    int n;
    cin>>n;

    int f, f1 = 0, f2 = 1;
    cout<<"series = "<<f1<<" "<<f2<<" ";
    for (int i = 2; i < n; i++)
    {
        f = f1 + f2;
        f1 = f2; 
        f2 = f;
        cout<<f<<" ";
    }

    
}