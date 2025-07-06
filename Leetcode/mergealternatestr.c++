
#include <iostream>
using namespace std;

void merge(string &word1, string &word2){
    string merged = "";
    int i = 0;

    int n1 = word1.size();
    int n2 = word2.size();

    while (i < n1 && i < n2)
    {
        merged += word1[i];
        merged += word2[i];
        i++;
    }

    while (i < n1)
    {
        merged += word1[i];
        i++;
    }
    
    while (i < n2)
    {
        merged += word2[i];
        i++;
    }
    


    // if(word1.size() < word2.size()){
    //     while (word1[i] != '\0')
    //     {
    //         merged += word1[i];
    //         merged += word2[i];
    //         i++;
    //     }
    // }
    // else{
    //     while (word2[i] != '\0')
    //     {
    //         merged += word1[i];
    //         merged += word2[i];
    //         i++;
    //     }
    // }

    // while (word1[i] != '\0')
    // {
    //     merged += word1[i];
    //     cout<<"merged from word1 : "<<merged<<endl;
    //     i++;
    // }

    // while (word2[i] != '\0')
    // {
    //     merged += word2[i];
    //     cout<<"merged from word2 : "<<merged<<endl;
    //     i++;
    // }
    
    cout<<merged;
    
    
}

int main(){

    string str1 = "abchgf";    
    string str2 = "pqrs";    
    
    merge(str1, str2);
}