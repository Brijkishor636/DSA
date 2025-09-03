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
        void searchNode(int v){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return ;
            }
            node *temp = head;
            while(temp != NULL){
                if(temp->value == v){
                    cout<<v<<" node is present"<<endl;
                    return;
                }
                temp = temp->next;
            }
            cout<<v<<" Node is not present"<<endl;
        }   

        void insertSorted(int v){
            node *temp = new node();
            temp->value = v;
            if(head == NULL){
                head = temp;
                return;
            }
            if(temp->value < head->value){
                temp->next = head;
                head = temp;
                return;
            }
            node *p = head;
            while(p->next != NULL){
                if(p->next->value < v){
                    p = p->next;
                }
                else{
                    temp->next = p->next;
                    p->next = temp;
                    return;
                }
            }
            p->next = temp;
        }

        void removeDuplicates(){
            node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->value == temp->next->value) {
            node* dup = temp->next;
            temp->next = dup->next;
            delete dup;
        } else {
            temp = temp->next;
        }
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
};

int main(){
    linkedList l1;
    l1.insertSorted(14);
    l1.insertSorted(21);
    l1.insertSorted(21);
    l1.insertSorted(21);
    l1.insertSorted(11);
    l1.insertSorted(30);
    l1.insertSorted(10);
    l1.printNode();
    l1.searchNode(15);
    l1.removeDuplicates();
    l1.printNode();
    
    return 0;
}