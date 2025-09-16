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

        int calculateSum(int v){
            int sum = 0;
            while (v > 0)
            {
                int digit = v % 10;
                sum = sum + digit;
                v = v/10;
            }
            return sum;
        }

        void remove_even_sum(){
            node *t = head;
            while(t != NULL){
                if(t == head && (calculateSum(head->value) % 2 == 0)){
                head = head->next;
                t = head;
                }
                else{
                    int sum = calculateSum(t->value);
                    if(sum % 2 == 0){
                        if(t->prev)
                            t->prev->next = t->next;
                        if(t->next)
                            t->next->prev = t->prev;
                    }
                    t = t->next;
                }
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
    d.insertNode(12);
    d.insertNode(8);
    d.insertNode(8);
    d.insertNode(2);
    d.insertNode(3);
    d.insertNode(4);
    d.insertNode(13);
    d.printNode();
    d.remove_even_sum();
    d.printNode();

}