#include<iostream>
using namespace std;

void print(char arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void reverse(char arr[], int n){
    
    int i = 0;
    int j = n/2;
    while (i < j)
    {
        swap(arr[i], arr[n-1]);
        i++;
        n--;
    }
}

int main(){
    char ch[10];
    int n = 10;
    cout<<"enter the element of array :- "<<endl;
    cin>>ch;
    print(ch, n);
    
    reverse(ch, n);
    print(ch, n);
}