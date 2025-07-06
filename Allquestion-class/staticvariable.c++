#include<iostream>
using namespace std;

class Static
{
    private:
       int x;
    public:
        static int sum;
        Static(){
            x = sum++;
        }

        static void stat(){
            cout<<"Result is : "<<sum<<endl;
        }
        void number(){
            cout<<"Number is :"<<x<<endl;
        }
};

int Static :: sum;

int main(){
    Static s1, s2, s3;
    s1.number();
    s2.number();
    s3.number();
    cout<<s1.sum;
    

}