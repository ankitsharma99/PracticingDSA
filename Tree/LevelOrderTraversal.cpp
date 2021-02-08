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

void LevelOrderTraversal(Node * root){
    queue<Node *> q;
    if(root == nullptr){
        return;
    }

    q.push(root);

    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<"\t";
        if(curr->left != nullptr){
            q.push(curr->left);
        }
        if(curr->right != nullptr){
            q.push(curr->right);
        }
    }
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
    root->right->right->left = new Node(69);


    LevelOrderTraversal(root);
    

}