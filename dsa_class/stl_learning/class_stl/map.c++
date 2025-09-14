#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<string, float> m;
    m.insert(pair<string, float>("Brij", 6.4));
    m.insert(pair<string, float>("kumar", 9.4));
    m.insert(pair<string, float>("Anand", 6.7));
    m.insert(pair<string, float>("Rahul", 5.6));

    m["kishor"] = 7.6;

    map<string, float>:: iterator x;

    for(x = m.begin(); x != m.end(); x++){
        cout<<x->first<<" -> "<<x->second<<endl;
    }


    map<int, char> m2;
    m2.insert(pair<int, char>(2,'a'));
    m2.insert(pair<int, char>(7,'b'));
    m2.insert(pair<int, char>(4,'k'));
    m2.insert(pair<int, char>(9,'l'));

    m2[10] = 'j';

    map<int, char>:: iterator y;

    for(y = m2.begin(); y != m2.end(); y++){
        cout<<y->first<<" -> "<<y->second<<endl;
    }

}