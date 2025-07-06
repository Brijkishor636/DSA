#include<iostream>
using namespace std;

int main(){
    int arr[2][2], arr2[2][2], arr3[2][2];
    int n = 2;

    cout<<"Enter the first matrix :- "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Enter the second matrix :- "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum + arr[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
        
    }

    cout<<"Multiply is :- "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}