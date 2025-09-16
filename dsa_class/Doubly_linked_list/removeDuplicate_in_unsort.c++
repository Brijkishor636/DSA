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

        void removeDup_in_unsorted(){
            node *t = head;
            while(t != NULL){
                node *temp = t->next;
                while(temp != NULL){
                    if(t->value == temp->value){
                        node *todelete = temp;
                        temp = temp->next;

                        if(todelete->prev)
                            todelete->prev->next = todelete->next;
                        if(todelete->next)
                            todelete->next->prev = todelete->prev;
                        delete todelete;
                    }
                    else{
                        temp = temp->next;
                    }
                }
                t = t->next;
            }
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
    d.insertNode(3);
    d.insertNode(7);
    d.insertNode(3);
    d.insertNode(9);
    d.insertNode(3);
    d.printNode();
    // d.countNode();
    d.removeDup_in_unsorted();
    d.printNode();
}