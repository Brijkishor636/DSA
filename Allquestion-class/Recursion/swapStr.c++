#include<iostream>
using namespace std;

void reverse(string &str, int i, int j){

    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

int main(){

    string name = "Brij";
    int n = name.size();

    reverse(name, 0, (n-1));

    cout<<name<<endl;

}