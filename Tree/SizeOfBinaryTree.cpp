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


//Size is the number of elements in a tree
int getSize(Node *root){
    if(root == nullptr){
        return 0;
    }
    //Aux space : O(n)
    return 1+getSize(root->left) + getSize(root->right);
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


    cout<<getSize(root)<<"\t";
    return 0;   
}