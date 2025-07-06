
#include<iostream>
#include <algorithm>
using namespace std;

bool isSubstring(string &s){

    const int MAX_VAL = 26;

    int charCount[MAX_VAL] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        charCount[s[i] - 'a']++;
    }
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        cout<<charCount[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        for (int j = 0; j < MAX_VAL; j++)
        {
            if(charCount[i] != charCount[j] || charCount[i] != 0){
                return false;
            }
        }
           
    }
     
    return true;
    
}

int main(){

    string s = "abdabd";
    cout<<isSubstring(s);

}