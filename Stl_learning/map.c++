#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, string> m;

    m[1] = "Brij";
    m[2] = "Kishor";
    m[24] = "Kumar";

    m.insert({4, "satyam"});

    for(auto i: m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    // m.erase(4);

    // cout<<"After :- "<<endl;
    // for(auto i: m){
    //     cout<<i.first<<" -> "<<i.second<<endl;
    // }


    cout<<"finding 4 :- "<<m.count(4)<<endl;

    auto it = m.find(4);

    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }

}