#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

int res = 0;
int Diameter(Node *root){
    if(root == nullptr) return 0;

    int lh = Diameter(root->left);
    int rh = Diameter(root->right);

    res = max(res, 1+rh+lh);

    return 1+max(rh, lh);
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(100);
    root->left = new Node(90);
    root->left->right = new Node(44);
    root->left->right->right = new Node(46);
    root->left->right->right->right = new Node(69);
    root->left->right->right->right->right = new Node(86);
    root->left->right->right->right->right ->right = new Node(1);
    root->right = new Node(80);
    root->left->left = new Node(70);
    root->left->left->left = new Node(75);
    root->left->left->left->left = new Node(77);

        cout<<Diameter(root)<<"\t"; 
    cout<<res<<"\n";
    return 0;
}
