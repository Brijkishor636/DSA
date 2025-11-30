#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
        int height;
        node(int key){
            data = key;
            left = NULL;
            right = NULL;
            height = 1;
        }
};

int Height(node *root){
    if(root == NULL){
        return 0;
    }
    int left = Height(root->left);
    int right = Height(root->right);
    return max(left, right) + 1;
}

node *rightRotation(node *y){
    node *x = y->left;
    node *t1 = x->right;

    x->right = y;
    y->left = t1;
    y->height = Height(y);
    x->height = Height(x);
    return x;
}

node *leftRotation(node *y){
    node *x = y->right;
    node *t2 = x->left;

    x->left = y;
    y->right = t2;
    y->height = Height(y);
    x->height = Height(x);
    return x;
}

int getBalanceFactor(node *root){
    if(root == NULL){
        return 0;
    }
    return (Height(root->left) - Height(root->right));
}

node* insertNode(node *root, int key){
    if(root == NULL){
        return new node(key);
    }
    else if(root->data < key){
        root->right = insertNode(root->right, key);
    }
    else if(root->data > key){
        root->left = insertNode(root->left, key);
    }
    else{
        return root;
    }
    root->height = max(Height(root->left), Height(root->right)) + 1;

    int balanceFactor = getBalanceFactor(root);

    if(balanceFactor > 1){
        if(getBalanceFactor(root->left) >= 0){
            return rightRotation(root);
        }
        else{
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }
    else if(balanceFactor < -1){
        if(getBalanceFactor(root->right) <= 0){
            return leftRotation(root);
        }
        else{
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    }
    
    return root;  
}

void printInorder(node *root){
    if(root!=NULL){
        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);
    }
}

int main(){
    node *root = NULL;
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 15);
    root = insertNode(root, 87);
    root = insertNode(root, 35);
    root = insertNode(root, 40);
    root = insertNode(root, 68);
    root = insertNode(root, 90);

    printInorder(root);
}