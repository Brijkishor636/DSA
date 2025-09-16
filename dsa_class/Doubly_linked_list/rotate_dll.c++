#include<iostream>
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
        int n;
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

        void countNode(){
            n = 0;
            node *temp = head;
            while (temp != NULL)
            {
                n++;
                temp = temp->next;
            }
        }

        void rotate(int k){
            countNode();
            if(k >= n){
                k = k % n;
            }
            if (!head || k == 0) return;
            int pos = n - k;
            node *temp = head;
            node *p = head;
            while(pos > 1){
                temp = temp->next;
                pos--;
            }
            node *tail = head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            head = temp;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            tail->next = p;
            p->prev = tail;
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
    d.insertNode(3);
    d.insertNode(4);
    d.insertNode(5);
    d.printNode();
    d.rotate(6);
    d.printNode();

}