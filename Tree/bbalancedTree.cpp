#include<bits/stdc++.h>

using namespace std;


struct Node{
    int data;
    Node *left;
    Node * right;
    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

int isBalanced(Node *root){
    //Check if the node points to nullptr
    if(root == nullptr) return 0;

    //Take a leftheight variable that stores the value returned by the left subtree
    int leftHeigh = isBalanced(root->left);

    if(leftHeigh == -1) return -1;

    //Take a right Height variable that stoes the value returned by the right subtree
    int rightHeight = isBalanced(root->right);
    if(rightHeight == -1) return -1;

    //?????? IMPORTANT STEP ?????   if |leftSubtree - rightSubtree| is greater than 1, return -1; coz a balanced tree should have difference between left and
    //right subtree as almost one 
    if((abs)(leftHeigh- rightHeight) > 1) return -1;

    return max(leftHeigh, rightHeight) + 1;

}


int main(int argc, char const *argv[])
{

    Node *root = new Node(50);
    root->left = new Node(46);
    root->right = new Node(56);
    root->left->left = new Node(40);
    root->right->right = new Node(60);
    root->right->left = new Node(70);
    root->right->left->left = new Node(80);
    root->right->left->left->left = new Node(90);

    cout<<isBalanced(root);


    return 0;
}
