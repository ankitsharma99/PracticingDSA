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


void PrintKDistance(Node * root, int k){
    if(root == nullptr)
        return;
    if(k == 0){
        cout<<root->data<<" ";
    }
    PrintKDistance(root->left, k-1);
    PrintKDistance(root->right, k-1);
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

    PrintKDistance(root, 2);

}