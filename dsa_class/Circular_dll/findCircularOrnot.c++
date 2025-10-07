#include<iostream>
#include<unordered_set>
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

        bool checkCircular(){
            unordered_set<node*> s;
            node *t = head;
            while (t != NULL)
            {
                if(s.find(t) != s.end()){
                    return true;
                }
                else{
                    s.insert(t);
                }
                t= t->next;
            }
            return false;
        }

        void circular(){
            node *t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = head;
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
    l1.circular();
    l1.printCircular();
    cout<<l1.checkCircular();
    
    return 0;
}