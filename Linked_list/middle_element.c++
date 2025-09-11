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

        int middleElement(){
            int count = 0;
            int n = 0;
            node *temp = head;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }
            if(count % 2 == 0){
                n = (count/2)+1;
            }
            else{
                n = (count+1)/2;
            }
            temp = head;
            while (n > 1)
            {
                temp = temp->next;
                n--;
            }
            return temp->value;
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
    l1.createNode(6);  // In case of even values return (mid+1) index value
    l1.printNode();
    cout<<"Number is :- "<<l1.middleElement();
    
    return 0;
}