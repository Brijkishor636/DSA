// Given a circular doubly linked list and a position n. The task is to delete the node at
// the given position n from the beginning. Initial circular doubly linked list.

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
        int length = 1;
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

        void makeCircular(){
            if(head == NULL){
                return;
            }
            else{
                node *temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = head;
                head->prev = temp;
            }
        }

        void deleteAtPosition(int n){
            if(n > length){
                n = n % length;
            }
            if(head == NULL){
                cout<<"List is empty!!";
                return ;
            }
            if(n == 1){
                node *temp = head;
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                node *t = head;
                head = head->next;
                temp->next = head;
                head->prev = temp;
                delete t;
            }
            else{
                node *temp = head;
                while (n > 2 && temp->next != head)
                {
                    temp = temp->next;
                    n--;
                }
                node *t = temp->next;
                temp->next = t->next;
                t->next->prev = temp;
                delete t;
            }
        }

        void findLength(){
            node *temp = head;
            while (temp->next != head)
            {
                length++;
                temp = temp->next;
            }
        }

        void printCircular(){
            node *t = head;
            while(t->next != head){
                cout<<t->value<<" <-> ";
                t = t->next;
            }
            cout<<t->value;
            cout<<endl;
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
    d.makeCircular();
    d.printCircular();
    d.findLength();
    d.deleteAtPosition(5);
    d.printCircular();
}
