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

void Inorder(Node * root){
    if(root != nullptr){
        Inorder(root->left);
        cout<<root->data<<"\t";
        Inorder(root->right);
    }
}

void PreOrder(Node * root){
    if(root != nullptr){
        cout<<root->data<<"\t";
        PreOrder(root->left);
        PreOrder(root ->right);
    }
}

void PostOrder(Node * root){
    if(root != nullptr){
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<"\t";
    }
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
    

    cout<<"Inorder :    "; Inorder(root);
    cout<<"\n";
    cout<<"Preorder :   "; PreOrder(root);
    cout<<"\n";
    cout<<"Postorder :  ";PostOrder(root);
    return 0;
}
