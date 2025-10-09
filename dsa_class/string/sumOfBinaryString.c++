#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str1 = "11";
    string str2 = "1";
    int n1 = str1.size()-1;
    int n2 = str2.size()-1;
    int carry = 0;
    string result = "";
    while (n1 >= 0 || n2 >= 0 || carry)
    {
        int sum = carry;
        if(n1 >= 0)
            sum += str1[n1--]-'0';
        if(n2 >= 0)
            sum += str2[n2--]-'0';
        result += (sum % 2)+'0';
        carry = sum / 2;
    }
    reverse(result.begin(), result.end());
    cout<<result<<endl;
}