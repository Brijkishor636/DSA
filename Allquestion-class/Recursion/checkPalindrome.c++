#include<iostream>
using namespace std;

// Palindrome using loop --->


// bool checkPalindrome(string &str, int i, int j){

//     while(i <= j){
//         if(str[i] != str[j]){
//             return 0;
//         }

//         i++;
//         j--;
//     }
//     return 1;
// }

// Palindrome using recursion--->

bool checkPalindrome(string &str, int i, int j){

    if(i > j){
        return 1;
    }

    if(str[i] != str[j]){
        return 0;
    }

    i++;
    j--;

    checkPalindrome(str, i, j);
}

int main(){
    string str = "abcddcbk";

    cout<<"Is palindrome :- "<<checkPalindrome(str, 0, (str.size()-1));
}