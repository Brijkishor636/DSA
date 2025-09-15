#include<iostream>
#include<unordered_map>
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
        doublyLL(){
            head = NULL;
        }

        void insert_sortly(int v){
            node *temp = new node(v);
            if(head == NULL){
                head = temp;
                return;
            }
            else if(head->value >= v){
                temp->next = head;
                head->prev = temp;
                head = temp;
                return;
            }
            else
            {
                node *curr = head;
                while (curr->next != NULL && curr->next->value < v) {
                curr = curr->next;
                }
            
                temp->next = curr->next;  
                if (curr->next != NULL)
                    curr->next->prev = temp;
            
                curr->next = temp;
                temp->prev = curr;
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
    d.insert_sortly(5);
    d.insert_sortly(9);
    d.insert_sortly(2);
    d.insert_sortly(6);
    d.printNode();
    
    
}