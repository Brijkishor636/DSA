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

        int number_for_last(int n){
            int count = 0;
            node *temp = head;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }
            int idx = count-n+1;
            temp = head;
            if(idx > 0){
                while (idx > 1)
                {
                    temp = temp->next;
                    idx--;
                }
                return temp->value;
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
    l1.createNode(1);
    l1.createNode(2);
    l1.createNode(3);
    l1.createNode(4);
    l1.createNode(5);
    l1.printNode();
    cout<<"Number is :- "<<l1.number_for_last(6);
    
    return 0;
}