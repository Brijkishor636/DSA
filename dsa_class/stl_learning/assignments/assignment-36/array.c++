#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;

int main(){
    array<int, 8>A = {2,4,6,8,8,2,2,3}; 
    cout<<A.at(3)<<endl;

    cout<<A.max_size()<<endl;

    cout<<A.front()<<endl;
    cout<<A.back()<<endl;

    cout<<"Is empty :- "<<A.empty()<<endl;

    int num = 0;

    for(int i = 0; i < A.size(); i++){
        num = count(A.begin(), A.end(), A[i]);
        if(num % 2 != 0){
            cout<<A[i]<<" ";
        }
    }

    
    
}