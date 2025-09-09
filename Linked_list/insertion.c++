#include<iostream>
using namespace std;

class node{
    public:
        int value;
        node*next;
        node(){
            value = 0;
            next = NULL;
        }
};

class linkedList{
    public:
        node*head;
        linkedList(){
            head = NULL;
        }
        void createNode(int v){
            node*temp = new node();
            temp->value = v;
            if(head == NULL){
                head = temp;
            }
            else{
                node*t = head;
                while(t->next != NULL){
                    t = t->next;
                }
                t->next = temp;
            }
        }

        void insertAtMiddle(int n, int v){
            node *t = head;
            node *temp = new node();
            temp->value = v;
            while(n > 1){
                t = t->next;
                n--;
            }
            temp->next = t->next;
            t->next = temp;
        }

        void deletatPosition(int n){
            node *t = head;
            if(n == 1){
                node *temp = head;
                head = head->next;
                delete temp;
            }
            while(n > 2){
                t = t->next;
                n--;
            }
            node *temp = t->next;
            t->next = temp->next;
            delete temp;
        }

        void circular(){
            node *t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = head;
        }

        void insertAtEndCircular(int v){
            node *temp = new node();
            temp->value = v;
            node *t = head;
            while(t->next != head){
                t = t->next;
            }
            t->next = temp;
            temp->next = head;
        }

        void inserAtbegincircular(int v){
            node *temp = new node();
            temp->value = v;
            node *t = head;
            while (t->next != head)
            {
                t = t->next;
            }
            t->next = temp;
            temp->next = head;
            head = temp;
        }

        void printCircular(){
            node *t = head; 
            while(t->next != head){
                cout<<t->value<<" -> ";
                t = t->next;
            }
            cout<<t->value<<endl;
        }

        void printNode(){
            node *t = head;
            while(t->next != NULL){
                cout<<t->value<<" -> ";
                t = t->next;
            }
            cout<<t->value;
            cout<<endl;
        }
};

int main(){
    linkedList l1;
    l1.createNode(10);
    l1.createNode(20);
    l1.createNode(30);
    l1.createNode(40);
    l1.createNode(50);
    l1.printNode();
    l1.insertAtMiddle(1, 70);
    l1.printNode();
    l1.deletatPosition(1);
    l1.printNode();
    // l1.circular();
    // l1.insertAtEndCircular(90);
    // l1.printCircular();
    // l1.inserAtbegincircular(100);
    // l1.printCircular();
    
    return 0;
}