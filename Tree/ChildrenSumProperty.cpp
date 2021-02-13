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

bool ChildrenSumProperty(Node* root){
    if(!root) return true;

    if(!(root->left) && !(root->right)) return true;

    int sum = 0;
    if(root->left) {
        sum += root->left->data;
    }
    if(root->right){
        sum += root->right->data;
    }

    return (root->data == sum && ChildrenSumProperty(root->left) && ChildrenSumProperty(root->right));
}


int main(int argc, char const *argv[])
{
    Node *root = new Node(100);
    root ->left = new Node(60);
    root->right = new Node(40);
    root->left->left = new Node(30);
    root->left->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(25);


    bool getter = false;
     getter = ChildrenSumProperty(root);

    cout<<(getter == true ? "YES" : "NO");

    return 0;
}