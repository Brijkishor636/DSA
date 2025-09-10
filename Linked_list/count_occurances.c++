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

        int countOccurance(int v){
            node *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                if(temp->value == v){
                    count++;
                }
                temp = temp->next;
            }
            return count;
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
    l1.createNode(1);
    l1.createNode(2);
    l1.createNode(1);
    l1.createNode(3);
    l1.createNode(1);
    l1.printNode();
    cout<<"Occurance of number 1 is :- "<<l1.countOccurance(1)<<endl;
    
    return 0;
}