#include<iostream>
#include<unordered_map>
using namespace std;

class node{
    public:
        int value;
        node *next;
        node *prev;
        node(int v){
            value = v;
            next = NULL;
            prev = NULL;
        }
};

class doublyLL{
    public: 
        node *head;
        doublyLL(){
            head = NULL;
        }

        void insertNode(int v){
            node *temp = new node(v);
            if(head == NULL){
                head = temp;
                return;
            }
            node *t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }

        int findSize(){
            int count = 0;
            node *temp = head;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }

        unordered_map<int, int>mp;
        unordered_map<int, int> findSum(int x){
            node *temp = head;
            node *t = head;
            while(t->next != NULL){
                t = t->next;
            }
            while (temp->value <= t->value)
            {
                if((temp->value + t->value) == x){
                    mp.insert({temp->value, t->value});
                    temp = temp->next;
                }
                else if((temp->value + t->value) > x){
                    t = t->prev;
                }
                else{
                    temp = temp->next;
                }
            }
            return mp;
        }

        void printNode(){
            node *temp = head;
            while(temp->next != NULL){
                cout<<temp->value<<" <-> ";
                temp = temp->next;
            }
            cout<<temp->value<<endl;
        }
};

int main(){
    doublyLL d;
    d.insertNode(1);
    d.insertNode(2);
    d.insertNode(4);
    d.insertNode(5);
    d.insertNode(6);
    d.insertNode(8);
    d.insertNode(9);
    d.printNode();
    unordered_map<int, int> m;
    m = d.findSum(7);
    for(auto &p:m){
        cout<<p.first<<" + "<<p.second<<" = "<<7<<endl;
    }
    
}