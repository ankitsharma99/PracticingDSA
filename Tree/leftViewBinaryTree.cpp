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


//Theta (N) Aux Space
int maxlevel = 0;
void printLeftViewRecursive(Node * root, int level){
    if(root == nullptr)  return;

    if(maxlevel < level){
        cout<<root->data<<"\t";
        maxlevel = level;
    }
    printLeftViewRecursive(root->left, level + 1);
    printLeftViewRecursive(root -> right, level + 1);

}

//Efficient
void printLeftViewIterative(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        int size = q.size();

        for(int i =0; i<size; i++){
            Node* curr = q.front();
            q.pop();

            if(i == 0) {
                cout<<curr->data<<"\t";
            }
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }

        }
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
    root->right->left->left = new Node(200);
    root->right->right = new Node(18);
    root->right->left->right = new Node(99);
    // root->right->right->left = new Node(69);

    // int level = 1;
    printLeftViewIterative(root);
    return 0;


    //Op : 10   9   7   200

}
