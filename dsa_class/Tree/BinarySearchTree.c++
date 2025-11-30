#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int v){
            data = v;
            left = NULL;
            right = NULL;
        }

    void inorder(){
        if(this->left != NULL)
            this->left->inorder();
        cout<<this->data<<" ";
        if(this->right != NULL)
            this->right->inorder();
    }

    Node * insert(int value){
        if(this->data > value){
            if(left == NULL){
                left = new Node(value);
            }
            else{
                this->left->insert(value);
            }
        }
        else if(this->data <= value){
            if(right == NULL)
                right = new Node(value);
            else{
                this->right->insert(value);
            }
        }
        return this;
    }

    int minElement(Node *root){
        if(root->left == NULL){
            return root->data;
        }
        else{
            minElement(root->left);
        }
    }

    Node *Delete(int value){
        // if(this == NULL){
        //     return NULL;
        // }
        if(this->data < value){
            this->right = this->right->Delete(value);
        }
        else if(this->data > value){
            this->left = this->left->Delete(value);
        }
        else{
            if(this->left == NULL && this->right == NULL){
                delete this;
                return NULL;
            }
            else if(this->left == NULL){
                Node *temp = this->right;
                delete this;
                return temp;
            }
            else if(this->right == NULL){
                Node *temp = this->left;
                delete this;
                return temp;
            }
            else{
                int successor = minElement(this->right);
                this->data = successor;
                this->right = this->right->Delete(successor); 
            }
            return this;
        }
    }
};

int main(){
    Node *root = new Node(10);
    root->insert(6);
    root->insert(17);
    root->insert(16);
    root->insert(12);
    root->insert(8);
    root->insert(15);
    root->insert(18);
    root->insert(19);
    root->insert(3);
    root->inorder();
    // cout<<endl;
    // root->Delete(15);
    // root->inorder();
    // cout<<endl;
    // root->Delete(17);
    // root->inorder();
    cout<<endl;
    root->Delete(10);
    root->inorder();
}
