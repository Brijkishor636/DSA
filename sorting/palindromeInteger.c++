#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str){
    int i = 0; 
    int j = str.size()-1;
    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    // string str = to_string(n);
    // cout<<isPalindrome(str);
    int temp = n;
    int rev = 0;
    int rem = 0;
    while(n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(rev == temp){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
}