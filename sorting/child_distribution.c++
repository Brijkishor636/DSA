#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    // double pop, days;
    // double birthRate, deathRate;

    // cin>>pop>>days>>birthRate>>deathRate;
    // for(int i = 0; i < days; i++){
    //     pop = pop + (pop * birthRate) - (pop * deathRate);
    // }
    // cout<<(int)(pop + 0.5);



    int n, x;
    cin>>n;
    // string str = to_string(n);
    int temp = n;
    int sum = 0;
    // for(int i = 0; i < str.size(); i++){
    //     sum += str[i] - '0';
    // }
    while (n > 0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    
    x = temp / sum;
    cout<<x;
}