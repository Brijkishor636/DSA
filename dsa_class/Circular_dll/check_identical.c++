// Given two circular linked lists L1 and L2, the task is to find if the two circular linked
//  lists are identical or not.

#include <iostream>
#include<string>
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

        
        void makeCircular(){
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = head;
            head->prev = temp;
        }

        void printCircular(){
            node *temp = head;
            while (temp->next != head)
            {
                cout<<temp->value<<" <-> ";
                temp = temp->next;
            }
            cout<<temp->value<<endl;
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

class doublyLL2: public doublyLL{
    node *head;
        doublyLL2(){
            head = NULL;
        }
};

string convertToString(node *head){
    node *temp = head;
    string s = "";
    while (temp->next != head)
    {
        s += to_string(temp->value);
        temp = temp->next;
    }
    s += to_string(temp->value);
    return s;
}

bool checkIdentical(string &s, string &t){
    int i = 0, j = 0;
    int m = s.size();
    int n = t.size();
    if(m != n){
        return false;
    }
    while (i < m && j < n)
    {
        if(s[i] != t[j]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main(){
    doublyLL d;
    d.insertNode(2);
    d.insertNode(4);
    d.insertNode(3);
    d.insertNode(7);
    d.insertNode(9);
    d.makeCircular();
    d.printCircular();

    doublyLL d2;
    d2.insertNode(2);
    d2.insertNode(4);
    d2.insertNode(3);
    d2.insertNode(7);
    d2.insertNode(9);
    d2.makeCircular();
    d2.printCircular();
    
    string s = convertToString(d.head);
    string t = convertToString(d2.head);
    
    cout<<checkIdentical(s, t);
    
}