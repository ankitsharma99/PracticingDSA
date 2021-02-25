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

Node* InorderSuccessor(Node* root){
    
    root = root->right;
    while(!root && root->left)
        root = root->left;

    return root;
}

Node* BSTDelete(Node* root, int key){
    if(!root) return nullptr;

    if(root->data > key){
        root->left = BSTDelete(root->left, key);
    }
    else if(root->data < key){
        root->right = BSTDelete(root->right, key);
    }
    else{
        if(!root->left){
            Node* curr = root ->right;
            delete root;
            return curr;
        }
        else if(!root->right){
            Node * curr = root ->left;
            delete root;
            return curr;
        }
        else{
            Node *InSuc = InorderSuccessor(root);
            root->data = InSuc -> data;
            root->right = BSTDelete(root->right, InSuc->data);
        }
    }
    return root;
}

void Inorder(Node *root){
    if(!root) return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(Node * root){
    if(!root) return;

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
}
int main(){
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->right->right = new Node(55);
    root->right->left = new Node(45);
    
    root->left->right = new Node(35);

    Node* res = BSTDelete(root, 20);
    cout<<res->data<<"\n";
    cout<<"INORDER: ";
    Inorder(root);
    cout<<"\n";
    cout<<"PREORDER: ";

    Preorder(root);


    return 0;


}