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
            node *t = head;
            node *temp = head;
            node *tail = head;
            node *k = head;
            while (t != NULL)
            {
                tail = tail->next;
                if(t->value < t->next->value){
                    k = k->next;
                }
                t = t->next;
            }
            
            while (tail->prev != k)
            {
                node *s = tail;
                tail = tail->prev;
                node *p = temp;
                temp = temp->next;
                s->next = p->next;
                p->next = s;
                s->prev = p;
                temp->prev = s;
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