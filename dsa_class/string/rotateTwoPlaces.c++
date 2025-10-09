#include<iostream>
#include<vector>
using namespace std;

vector<char> rotate(string &str2, int k){
    int n = str2.size();
    vector<char>str3(n, 'a');
    for (int i = 0; i < n; i++)
    {
        str3[(i+k)%n] = str2[i]; 
    }
    return str3;
}

int main(){
    string str1 = "amazon";
    string str2 = "azonam";
    vector<char> newStr2 = rotate(str2, 2);
    if(str1.size() != newStr2.size()){
        cout<<"After rotate strings are not equal.";
    }
    for (int i = 0; i < str1.size(); i++)
    {
        if(str1[i] != newStr2[i]){
            cout<<"After rotate strings are not equal.";
            break;
        }
    }
    cout<<"After rotate strings are equal";
    
}