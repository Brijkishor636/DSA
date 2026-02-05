#include<iostream>
using namespace std;

int main(){
    string str1, str2, newStr;
    cin>>str1>>str2;
    for(int i = 0; i < str1.size(); i++){
        if(str2[i] == '1'){
            newStr += str1[i];
        }
    }
    cout<<newStr;
}