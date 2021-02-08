#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


int getMaxElement(Node *root){
    if(root == nullptr) return INT32_MIN;

    return max(root->data, max(getMaxElement(root->left), getMaxElement(root->right)));
    
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(10);
    root ->left = new Node(9);
    root->right = new Node(12);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->left = new Node(14);
    root->right->right = new Node(18);


    cout<<getMaxElement(root);
}