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

        int countNode(){
            int n = 1;
            node *temp = head;
            while (temp->next != head)
            {
                n++;
                temp = temp->next;
            }
        }

        void makeCircular(){
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = head;
            head->prev = temp;
        }

        void reverseCircular(){
            node *last = NULL;
            node *curr = head;
            while (curr->next != head)
            {
                last = curr->prev;
                curr->prev = curr->next;
                curr->next = last;
                curr = curr->prev;
            }
                last = curr->prev;
                curr->prev = curr->next;
                curr->next = last;
                curr = curr->prev;
                head = last->prev;
        }

        void printCircular(){
            node *temp = head;
            while (temp->next != head)
            {
                cout<<temp->value<<" <-> ";
                temp = temp->next;
            }
            cout<<temp->value<<endl;
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
    d.insertNode(2);
    d.insertNode(4);
    d.insertNode(3);
    d.insertNode(7);
    d.insertNode(9);
    d.printNode();
    d.makeCircular();
    d.printCircular();
    d.reverseCircular();
    d.printCircular();

}