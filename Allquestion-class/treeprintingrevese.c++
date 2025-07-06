#include<iostream>
#include<cmath>
using namespace std;

void printTree(int arr[], int n){
    for (int i = 1; i <= n; i++)
    {
        int l = log2(i);
        
        if (l % 2 == 0)
        {
            for (int j = pow(2, l); j <= pow(2, l+1)-1; j++)
            {
                cout<<arr[j]<<" ";
                
            }
            
        }
        else{
            for (int j = pow(2, l+1)-1; j >= pow(2, l); j--)
            {
                cout<<arr[j]<<" ";
            }
            
        }
        i = i + (pow(2, l)-1);
    }
    
}

int main(){
    int arr[200];
    int n;
    cout<<"Enter the size of the array :- "<<endl;
    cin>>n;
    cout<<"Enter elements in the array :- "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    
    printTree(arr, n);

}