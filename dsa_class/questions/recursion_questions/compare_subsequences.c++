#include<iostream>
#include<set>
using namespace std;

class Solution {
  private:
    void solve1(string &s1, set<string>&ans1, string &output, int index){
        if(index == s1.size()){
            ans1.insert(output);
            return;
        }

        solve1(s1, ans1, output, index+1);
        output.push_back(s1[index]);
        solve1(s1, ans1, output, index+1);
    }

    void solve2(string &s2, set<string>&ans2, string &output2, int index){
        if(index == s2.size()){
            ans2.insert(output2);
            return;
        }

        solve2(s2, ans2, output2, index+1);
        output2.push_back(s2[index]);
        solve2(s2, ans2, output2, index+1);
    }
  public:
    string betterString(string &s1, string &s2) {
        set<string> ans1;
        set<string> ans2;
        if(s1.size() == 0 && s2.size() == 0){
            return s1;
        }
        
        string output;
        string output2;
        solve1(s1, ans1, output, 0);
        solve2(s2, ans2, output2, 0);

        if(ans1.size() >= ans2.size()){
            return s1;
        }
        else{
            return s2;
        }
    }
};

int main(){
    Solution S;
    string s1 = "gboubwd";
    string s2 = "bekoilx";
    cout<<S.betterString(s1, s2)<<endl;

}