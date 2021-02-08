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


//O(n)
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

/*
In this method, we print the levels after adding a NEWLINE after each level. For example, for the tree that we made in main func, we will get the output as:
10      
9       12
7       8       14      18
69

This method is just an extension of the above printing of line by line method.
When we add all the nodes in the queue at a particular level, we print a new line and also add a null indicating the end of the level.
*/
void LevelLineTraversal(Node * root){
    queue<Node *> q1;
    if(root == nullptr) return;

    q1.push(root);   //add root to queue
    q1.push(nullptr); //push null value to queue indicating end of the level

    while(q1.size() > 1){    //q1.size should be greater than one as in the end, we will have a null value in the queue

        Node *curr = q1.front();    
        q1.pop();
        if(curr == nullptr){         //If curr is pointing to nullptr, print a new line and push a null pointer in the queue, indicating the end of a level
            cout<<"\n";
            q1.push(nullptr);
            continue;          //Important statement so that the loop executes the next iteration
        }


        cout<<curr->data<<"\t";
        if(curr->left != nullptr){
            q1.push(curr->left);
        }
        if(curr->right != nullptr){
            q1.push(curr->right);
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


    LevelLineTraversal(root);
    

}