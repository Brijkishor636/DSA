#include<iostream>
using namespace std;

class Tree{
    public:
    int arr[100] = {0};
    int size = 100;

    void insert(int i, int v){
        if(i == 1){
            arr[i] = v;
        }
        else if(i/2 != 0 && i < size){
            arr[i] = v;
        }
    }
    void leftChild(int p, int v){
        if(arr[p] != 0){
            arr[2 * p] = v;
        }
        else{
            cout<<"Parent does not exist"<<endl;
        }
    }
    void rightChild(int p, int v){
        if(arr[p] != 0 && (p*2+1) < size){
            arr[p * 2 + 1] = v;
        }
        else{
            cout<<"Parent does not exist"<<endl;
        }
    }
    void print(){
        for(int i = 0; i < size; i++){
            if(arr[i] != 0){
                cout<<arr[i]<<" ";
            }
            else{
                cout<<" - ";
            }
        }
    }
};

int main(){
    Tree t1;
    t1.insert(1, 5);
    t1.insert(2, 4);
    t1.insert(3, 9);
    t1.insert(4, 89);
    t1.leftChild(4, 65);
    t1.rightChild(4, 34);
    t1.print();
}