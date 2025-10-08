#include<iostream>
#include<vector>
#include<string>
#include <cctype>
using namespace std;

bool isPangram(string &str){
    vector<bool>alphabet(26, false);
    for(int i = 0; i < str.size(); i++){
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z'){
            alphabet[ch-'a'] = true;
        }
    }
    
    for(int i = 0; i < alphabet.size(); i++){
        if(alphabet[i] == false){
            return false;
        }
    }
    return true;
}

int main(){
    string str = "The quick brown fox jumps over the lazy dog";
    string str2 = "The quick brown fox jumps over the dog";
    cout<<isPangram(str)<<endl;
    cout<<isPangram(str2)<<endl;
}