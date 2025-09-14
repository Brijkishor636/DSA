#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotate_anticlockwise(int arr[10][10], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        
    }

    for (int j = 0; j < n; j++)
    {
        
    }
    
}

int main(){
    int arr[10][10];
    int m = 3, n = 3;

    cout<<"Enter the array :- "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    rotate_anticlockwise(arr, m, n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}