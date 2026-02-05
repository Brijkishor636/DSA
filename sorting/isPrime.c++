#include<iostream>
#include<string>
#include<set>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long num;
    cout<<"Enter a number :- "<<endl;
    cin>>num;
    set<long long>primes;
    string str = to_string(num);
    for(int i = 0; i < str.size(); i++){
        string temp = "";
        for(int j = i; j < str.size(); j++){
            temp = temp + str[j];
            long long number = stoll(temp);
            if(isPrime(number)){
                primes.insert(number);
            }
        }
    }
    
    if(primes.size() == 0){
        cout<<"No primes is there"<<endl;
    }
    else{
        for(auto i : primes){
            cout<<i<<" ";
        }
    }
}