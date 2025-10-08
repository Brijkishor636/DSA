#include<iostream>
#include<vector>
using namespace std;

int findDistance(vector<string>&s, string &word1, string &word2){
    int n = s.size();
    int l1, l2;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == word1){
            l1 = i;
        }
        if(s[i] == word2){
            l2 = i;
        }
    }
    int distance = l2-l1;
    if(distance < 0){
        distance = -distance;
    }
    return distance;
}

int main(){
    vector<string> s = { "the", "quick", "brown", "fox", "quick" };
    string word1 = "fox";
    string word2 = "the";

    cout<<findDistance(s, word1, word2);
}