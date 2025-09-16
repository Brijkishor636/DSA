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

        int fib(int n){
            if(n <= 1){
                return n;
            }
            else{
                return fib(n-1) + fib(n-2);
            }
        }

        int max_element(){
            int maxi = 0;
            node *temp = head;
            while(temp != NULL){
                if(temp->value > maxi){
                    maxi = temp->value;
                }
                temp = temp->next;
            }
            return maxi;
        }

        int find_maxIndex(){
            int i = 0;
            while (fib(i) <= max_element())
            {
                i++;
            }
            return i;   
        }

        void remove_fibno(){
            for(int i = 1; i < find_maxIndex(); i++){
                int fibNo = fib(i);
                node *temp = head;
                while (temp != NULL)
                {
                    if(temp == head && (head->value == fibNo)){
                        head = head->next;
                        temp = head;
                        head->prev = NULL;
                    }
                    if(temp->value == fibNo){
                        if(temp->prev)
                            temp->prev->next = temp->next;
                        if(temp->next)
                            temp->next->prev = temp->prev;
                    }
                    temp = temp->next;
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
    d.insertNode(15);
    d.insertNode(8);
    d.insertNode(9);
    d.insertNode(21);
    d.insertNode(3);
    d.insertNode(4);
    d.insertNode(13);
    d.printNode();
    d.remove_fibno();
    d.printNode();
    cout<<d.fib(7);

}