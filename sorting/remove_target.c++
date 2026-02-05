#include<iostream>
#include<string>
using namespace std;

int main(){
    string target = "communication";
    string ref = "com";

    for(int i = 0; i < ref.size(); i++){
        for(int j = 0; j < target.size(); j++){
            if(ref[i] == target[j]){
                target.erase(j, 1);
                j--;
            }
        }
    }
    cout<<target;
}