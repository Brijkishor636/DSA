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

        void swapPairwise(){
            node *temp = head;
            while(temp != NULL && temp->next != NULL){
                cout<<"Hi there"<<endl;
                int x = temp->value;
                temp->value = temp->next->value;
                temp->next->value = x;
                temp = temp->next->next;
            }
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

        void swapOnlyRight(){
            if(head == NULL || head->next == NULL){
                return;
            }
            node * t = head;
            while(t->next->next != NULL){
                t = t->next;
            }
            node *p = t->next;
            p->next = head;
            head = p;
            t->next = NULL;
        }
};

int main(){
    linkedList l1;
    l1.createNode(1);
    l1.createNode(2);
    l1.createNode(3);
    l1.createNode(4);
    l1.createNode(5);
    l1.createNode(6);
    l1.printNode();
    l1.swapPairwise();
    l1.printNode();
    l1.swapOnlyRight();
    l1.printNode();
    
    return 0;
}