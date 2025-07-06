#include<iostream>
using namespace std;

int rod_cutting(int arr[200][200], int cut[], int val[], int m, int n){
    for (int i = 0; i <= n; i++)
    {
        arr[i][0] = 0;
    }

    for (int i = 0; i <= n; i++)
    {
        arr[0][i] = val[i];
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < cut[i])
            {
                arr[i][j] = arr[i-1][j];
            }
            else{
                arr[i][j] = max(arr[i-1][j], val[i]+arr[i][j-cut[i]]);
            }
        }
        
    }
    
    return arr[n][n];

}

int main(){
    int m, n;
    cout<<"Enter the length of the rod :-"<<endl;
    cin>>n;
    cout<<"Enter the cut array length :- "<<endl;
    cin>>m;

    int cut[m];
    cut[0] = 0;
    cout<<"Enter the cut array :- "<<endl;
    for (int i = 1; i < m; i++)
    {
        cin>>cut[i];
    }

    int val[m];
    val[0] = 0;
    cout<<"Enter the cut value array :- "<<endl;
    for (int i = 1; i < m; i++)
    {
        cin>>val[i];
    }
    
    int arr[200][200];

    rod_cutting(arr, cut, val, m, n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Maximum profit is :- "<<rod_cutting(arr, cut, val, m, n)<<endl;

}