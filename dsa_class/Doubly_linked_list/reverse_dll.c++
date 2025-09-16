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

        void reverse(){
            node *last = NULL;
            node *curr = head;
            while (curr != NULL)
            {
                last = curr->prev;
                curr->prev = curr->next;
                curr->next = last;
                curr = curr->prev;
            }
            head = last->prev;
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
    d.reverse();
    d.printNode();

}