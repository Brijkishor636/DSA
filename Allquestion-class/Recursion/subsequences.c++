#include<iostream>
#include<vector>
using namespace std;

void solve(string str, int index, string output, vector<string> &ans){

    if(index >= str.length()){
        ans.push_back(output);
        return;
    }

    solve(str, index+1, output, ans);

    char element = str[index];
    output.push_back(element);

    solve(str, index+1, output, ans);

}

vector<string> subsequence(string &str){

    vector<string> ans;
    int index = 0;
    string output;

    solve(str, index, output, ans);
    return ans;

}

int main(){

    string str = "abc";
    vector<string> result = subsequence(str);

    cout<<"Subsequences are :- "<<endl;

    for (int i = 0; i < result.size(); i++) {
        if(result[i].empty())
            cout << "\"\"" << endl;
        else
            cout << result[i] << endl;
    }
    
}