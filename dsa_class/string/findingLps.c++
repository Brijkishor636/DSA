#include<iostream>
#include<vector>
using namespace std;

int main(){
    string text = "ababcaa";
    int m = text.size();
    int arr[7];

    int j = 0;
    int i = 1;
    arr[0] = 0;
    while(i < m){
        if(text[i] == text[j]){
            arr[i] = j+1;
            i++;
            j++;
        }
        else if(j == 0 && text[i] != text[j]){
            arr[i] = 0;
            i++;
        }
        else if(j > 0 && text[i] != text[j]){
            j = arr[j-1];
        }
    }

    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}