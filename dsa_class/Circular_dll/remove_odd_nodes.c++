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
        int n;
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

        void circular(){
            node *t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = head;
        }

        void countNode(){
            node *temp = head;
            n = 1;
            while (temp->next != head)
            {
                n++;
                temp = temp->next;
            }
        }

        void deletatPosition(int i){
            node *t = head;
            if(i == 1){
                node *temp = head;
                node *t = head;
                while (t->next != head)
                {
                    t = t->next;
                }
                head = head->next;
                t->next = head;
                delete temp;
            }
            while(i > 2){
                t = t->next;
                i--;
            }
            node *temp = t->next;
            t->next = temp->next;
            delete temp;
        }

        void remove_odd_nodes(){
            int i = 1;
            countNode();
            while (i <= n)
            {
                deletatPosition(i);
                n--;
                i++;
            }
        }

        void printCircular(){
            node *t = head; 
            while(t->next != head){
                cout<<t->value<<" -> ";
                t = t->next;
            }
            cout<<t->value<<endl;
        }
};

int main(){
    linkedList l1;
    l1.createNode(10);
    l1.createNode(20);
    l1.createNode(30);
    l1.createNode(40);
    l1.createNode(50);
    l1.circular();
    l1.printCircular();
    l1.remove_odd_nodes();
    l1.printCircular();
    
    return 0;
}