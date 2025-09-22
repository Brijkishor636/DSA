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

        void sort_biotonic(){
            if (!head || !head->next) return;
            node *t = head;
            while(t->next != NULL && t->value < t->next->value){
                t = t->next;
            }
            if (!t->next) return;
            
            node *tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            node *s = head;
            node *k = head;
            node *p = tail;
            while(tail->prev != t){
                tail = tail->prev;
                if(k->next)
                    k = k->next;
                p->next = s->next;
                if(s->next)
                    s->next->prev = p;
                s->next = p;
                p->prev = s;
                s = k;
                p = tail;
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
    d.insertNode(1);
    d.insertNode(2);
    d.insertNode(3);
    d.insertNode(2);
    d.insertNode(1);
    d.printNode();
    d.sort_biotonic();
    d.printNode();

}