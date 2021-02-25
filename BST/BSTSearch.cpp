#include<bits/stdc++.h>

using namespace std; 

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

bool BSTSearch(Node *root, int key){
    if (root == nullptr) return false;
    if(root -> data == key) return true;
    if(root->data > key){
        return BSTSearch(root->left, key);
    }
    return BSTSearch(root->right, key);
}

int main () {


    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->right->right = new Node(55);
    root->right->left = new Node(45);
    
    root->left->right = new Node(35);

    bool res = BSTSearch(root, 350);

    if(res) cout<<"YES\n";
    else cout<<"\nNO";
    return 0;
}

