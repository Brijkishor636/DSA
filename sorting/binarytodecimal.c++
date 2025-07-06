#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, number;
    cout<<"Enter no of bits of the binary number :- "<<endl;
    cin>>n;
    cout<<"Enter the binary no :- "<<endl;
    cin>>number;
    int b;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        b = number % 10;
        sum = sum + (b * pow(2, i));
        number = number / 10;
    }

    cout<<"Decimal no is :- "<<sum;
    
}