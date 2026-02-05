#include<iostream>
using namespace std;

int main(){
    int math, bio, eng, hindi, soc;
    cin>>math>>bio>>eng>>hindi>>soc;
    int totalmarks = math+bio+eng+hindi+soc;
    int per = (totalmarks * 100) / 500;
    if(math < 30 || bio < 30 || eng < 30 || hindi < 30 || soc < 30){
        cout<<"Fail"<<endl;
    }
    if(math >= 90 && bio >= 70 && per >= 80){
        cout<<"math and bio both"<<endl;
    }
    else if(bio >= 90 && per >= 60){
        cout<<"bio only"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}