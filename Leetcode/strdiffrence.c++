#include<iostream>
#include <algorithm>
using namespace std;

void sortString(string &s){
    const int MAX_CHAR = 26;
    int charCount[MAX_CHAR] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        charCount[s[i]-'a']++;
    }

    string temp = "";

    for(int i = 0; i < MAX_CHAR; i++){
        for(int j = 0; j < charCount[i]; j++){
            temp += (char)('a' + i);
        }
    }
    
    cout<<"Sorted string :- "<<temp<<endl;
}

char diffStr(string &s, string &t){
    
    int n1 = s.length();
    int n2 = t.length();

    char temp;
    // if(n1 == 0){
    //     return t[0];
    // }

    // sortString(s);
    // sortString(t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout<<"sorted s :- "<<s<<endl;
    cout<<"sorted t :- "<<t<<endl;

    for(int i = 0; i < n2; i++){
        if (s[i] != t[i])
        {
            temp = t[i];
            return temp;
        } 
    }
    
    return t[0];
    
}

int main(){

    string s = "hgjhg";
    string t = "hkjhgg";
    cout<<diffStr(s, t);
    return 0;
}