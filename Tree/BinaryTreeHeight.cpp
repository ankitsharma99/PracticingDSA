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

int Height(Node * root){
    if(root == nullptr){
        return 0;
    }
    //Check for left and right subtree  and return the max of both of them (EZPZ)
    else return (1 + max(Height(root -> left), Height(root -> right)));
}


int main(int argc, char const *argv[])
{

    //I'm sorry for creating trees like this :(
    Node *root = new Node(10);
    root ->left = new Node(9);
    root->right = new Node(12);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->left = new Node(14);
    root->right->right = new Node(18);
    root->left->left->left = new Node(1);
    root->left->right->right = new Node(22);
    root->left->right->right->left = new Node(21);
    root->right->right->right = new Node(24);
    root->right->right->right->left = new Node(25);
    root->right->right->right->left->right = new Node(99);

    cout<<Height(root)<<"\t";
    
    return 0;
}
