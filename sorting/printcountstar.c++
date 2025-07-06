#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter n"<<endl;
    cin>>n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        int k = n-i-2;
        while (k >= 0)
        {
            cout<<" ";
            k--;
        }
        

        int j = 0; 
        while (j <= i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
    }
    
}