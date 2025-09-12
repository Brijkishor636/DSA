
#include<iostream>
#include<stack>
using namespace std;

class node{
    public:
        char value;
        node*next;
        node(char v){
            value = v;
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
            node*temp = new node(v);
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
        
        bool isPalindrome(){
            stack<char>s;
            node *t = head;
            while (t != NULL)
            {
                s.push(t->value);
                t = t->next;
            }
            
            t = head;
            while (t != NULL && !s.empty())
            {
                if(s.top() != t->value){
                    return false;
                }
                s.pop();
                t = t->next;
            }
            return true;
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
    l1.createNode('a');
    l1.createNode('b');
    l1.createNode('c');
    l1.createNode('b');
    l1.createNode('a');
    l1.printNode();
    cout<<"Palindrome or not :- "<<l1.isPalindrome()<<endl;
    l1.printNode();
    
    return 0;
}