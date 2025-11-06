#include<iostream>
#include<queue>
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
};

int Height(Node *root){
    if(root == NULL){
        return 0;
    }
    int lheight = Height(root->left);
    int rheight = Height(root->right);
    if(lheight > rheight){
        return lheight+1;
    }
    else{
        return rheight + 1;
    }
}

void printLevlOrder(Node *root){
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}


void printLevel(Node *root, int level, bool leftToRight){
    if(root == NULL){
        return ;
    }
    if(level == 0){
        cout<<root->data<<" ";
        return;
    }
    if(leftToRight){
        printLevel(root->left, level-1, leftToRight);
        printLevel(root->right, level-1, leftToRight);
    }
    else{
        printLevel(root->right, level-1, leftToRight);
        printLevel(root->left, level-1, leftToRight);
    }
}

void printLevelOrderRecursive(Node *root){
    int h = Height(root);
    bool leftToRight = true;
    for (int i = 0; i < h; i++)
    {
        printLevel(root, i, leftToRight);
        leftToRight = !leftToRight;
        cout<<endl;
    }
}

int main(){
    Node *root = new Node(2);
    Node *first = new Node(4);
    Node *second = new Node(5);
    Node *third = new Node(8);
    Node *fourth = new Node(6);
    Node *fifth = new Node(7);
    Node *sixth = new Node(15);
    Node *seventh = new Node(17);
    Node *eighth = new Node(8);
    Node *ninth = new Node(9);

    root->left = first;
    root->right = second;
    first->left = third;
    second->left = fourth;
    second->right = fifth;
    third->left = sixth;
    third->right = seventh;
    fifth->left = eighth;
    fifth->right = ninth;

    cout<<Height(root)<<endl;
    printLevlOrder(root);
    cout<<endl;
    int h = Height(root);
    cout<<"Print zigzag level of tree :- "<<endl;
    printLevelOrderRecursive(root);
    cout<<endl;
    cout<<"Third level of tree is :- "<<endl;
    printLevel(root, 3, true);
}
